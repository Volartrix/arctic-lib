#include <arctic-lib/arctic.h>

#include <stdio.h>

// For testing porpuses
void charout(const char *c) {
    puts(c);
}


int main(int argc, char** argv) {
    charout("A");
    arctic_init(charout);
    return 0;
}