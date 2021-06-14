#include<stdio.h>

int getGCD (int a,int b);
int getLCM (int a, int b);
int main () {
    int a, b;
    do {
        printf ("Enter a, b: ");
        scanf ("%d%d", &a, &b);
    }
    while (a <= 0 || b <= 0);

    printf ("GCD(%d, %d) = %d\nLCM(%d, %d) = %d\n", a, b, getGCD(a, b), a, b, getLCM(a, b));
        getchar();
    getchar();
}

int getGCD (int a,int b) {
    if (b == 0) return a;
    return getGCD (b, a % b);
}
int getLCM (int a, int b) {
    return a * b / getGCD (a, b);
}
