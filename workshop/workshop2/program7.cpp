#include<stdio.h>

int main () {
    char c1, c2;
    printf("Enter first character: ");
    scanf ("%c", &c1);
    fflush(stdin);
    printf("Enter second character: ");
    scanf ("%c", &c2);
    if (c1 > c2) {
        c1 = c1 ^ c2;
        c2 = c2 ^ c1;
        c1 = c1 ^ c2;
    }
    int d = c2 - c1;
    printf ("Difference: %d\n", d);
    for (char c = c1; c <= c2; ++ c) {
        printf ("%c: %d %o %X\n", c, c, c, c);
    }
    getchar();
    getchar();
}
