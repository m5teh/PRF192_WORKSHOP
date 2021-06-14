#include<stdio.h>

int getSumDigit (int n);
int main () {
    int n;

    do {

        printf ("Enter n = ");
        scanf ("%d", &n);

        if (n >= 0) {
            printf ("Sum digits of n = %d\n", getSumDigit (n));
        }
    }
    while (n >= 0);
        getchar();
    getchar();
}

int getSumDigit (int n) {
    if (n == 0) return 0;
    return getSumDigit (n / 10) + n % 10;
}
