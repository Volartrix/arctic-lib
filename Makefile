CC = clang
LD = ld.lld
CFLAGS = -ffreestanding -nostdlib -Iinclude
LD_FLAGS = -nostdlib -fuse-ld=lld
SRC = $(wildcard src/*.c)
OBJ = $(patsubst src/%.c, build/lib/%.o, $(SRC))
TEST_OBJ = build/test.o
LIB_NAME = libarctic.a
LIB_PATH = bin/$(LIB_NAME)
TEST_EXE = bin/test

all: $(LIB_PATH)

$(LIB_PATH): $(OBJ)
	mkdir -p bin
	$(AR) rcs $@ $^

build/lib/%.o: src/%.c
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

test: $(TEST_OBJ) $(LIB_PATH)
	$(CC) $(TEST_OBJ) -o $(TEST_EXE) -larctic -Lbin

test-run: test
	$(TEST_EXE)

build/test.o: test/test.c
	mkdir -p $(dir $@)
	$(CC) -c $< -o $@ -Iinclude

clean:
	rm -rf build bin
