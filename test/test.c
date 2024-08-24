#include <arctic-lib/arctic.h>

#include <stdio.h>

void my_puts(const char *str) {
    // Use printf to print the string without a newline
    printf("%s", str);
}

// For testing porpuses
void charout(const char *c) {
    my_puts(c);
}

int main(int argc, char** argv) {
    charout("A");
    arctic_init(charout);

    aprintf("Hello, world! %s\n", "This is a test");

    return 0;
}