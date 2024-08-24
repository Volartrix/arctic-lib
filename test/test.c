#include <arctic-lib/arctic.h>

#include <stdio.h>

// Test purpose function
void my_puts(const char *str) {
    printf("%s", str); // Used printf here since puts adds a newline and putc adds some wired characters at the end
}

// For testing porpuses
void charout(const char *c) {
    my_puts(c);
}

int main(int argc, char** argv) {
    charout("A");
    if (arctic_init(charout, "Test logger") != ARCTIC_OK) {
        return 1;
    }

    char *str = "Hello, world!";
    char str2[64];
    strcpy(str2, str);

    aprintf("Original string: %s\n", str);
    aprintf("Copied string: %s\n", str2);
    
    arctic_info("Hello, world! %s\n", "This is a test");
    arctic_warn("Hello, world! %s\n", "This is a test");
    arctic_error("Hello, world! %s\n", "This is a test");


    aprintf("Hello, world! %s\n", "This is a test");

    return 0;
}