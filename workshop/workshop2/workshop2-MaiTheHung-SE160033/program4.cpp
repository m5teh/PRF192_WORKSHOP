#include<stdio.h>

int main () {
    int x, y;
    do {
        printf ("Enter two integers:");
        scanf ("%d%d", &x, &y);
        x = x ^ y;
        y = y ^ x;
        x = x ^ y;
        if (x == 0 || y == 0) {
            printf ("Process terminated!\n");
        }
        else {
            printf ("After swap: %d %d\n", x, y);
        }
    }
    while (x != 0 && y != 0);
    getchar();
    getchar();
}
