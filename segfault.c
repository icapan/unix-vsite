#include <stdio.h>

void cause_segfault() {
    int *p = NULL;
    *p = 0;
}

int main() {
    printf("Hello, World!\n");
    cause_segfault();
    return 0;
}

/* Kompajliranje sa gcc -g segfault.c */
