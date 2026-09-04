#include <stdio.h>

void greet(const char *name) {
    printf("Hello, %s! Welcome to your GitHub portfolio.\n", name);
}

int main() {
    printf("Hello, World!\n");
    printf("This is Prachi.\n");

    greet("Ada");

    return 0;
}