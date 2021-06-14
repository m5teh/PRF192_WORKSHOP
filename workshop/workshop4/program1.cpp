#include<stdio.h>
int isPrime (int n) {
    if (n == 1) return 0;
    for (int i = 2; i * i <= n; ++ i) {
        if (n % i == 0) return 0;
    }
    return 1;
}
void input (int &n) {
    do {
        printf("Enter n = ");
        scanf ("%d", &n);
    }
    while (n < 0);
}
void do1() {
    int n;
    input (n);
    if (isPrime (n)) {
        printf("%d is a prime\n", n);
    }
    else {
        printf ("%d is not a prime\n, n");
    }
}
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
void do2() {
    int n;
    input (n);
    printf("min digit: %d\nmax digit: %d\n", minDigit (n), maxDigit (n));
}
void do3() {
    printf ("Thank you! :)\n");
}
int main () {
    int t;
    do {
        printf ("_______________________________________\n|1/ Process primes                    |\n|2/ Print min, max digit in an integer|\n|3/ Quit                              |\n|_____________________________________|\nPlease choose your option: ");
        scanf ("%d", &t);
        if (t == 1) {
            do1();
        }
        else if (t == 2) {
            do2();
        }
        else if (t == 3) {
            do3();
        }
    }
    while (t != 3);
    getchar();
    getchar();
}
