#include<stdio.h>

int minDigit (int n) {
    int minD = 11;
    do {
        if (minD > (n % 10)) {
            minD = n % 10;
        }
        n /= 10;
    }
    while (n != 0);
    return minD;
}
int maxDigit (int n) {
    int maxD = -1;
    do {
        if (maxD < (n % 10)) {
            maxD = n % 10;
        }
        n /= 10;
    }
    while (n != 0);
    return maxD;
}
void printMinMaxDigits( int n) {
    printf ("max digit of n = %d\nmindigit of n = %d", maxDigit (n), minDigit(n));
}

int main () {
    int n;
    printf ("Enter n = ");
    scanf ("%d", &n);
    printMinMaxDigits (n);
        getchar();
    getchar();
}
