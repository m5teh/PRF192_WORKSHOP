#include<stdio.h>

long int getFac (int n);

int main () {
    int n;
    // Input data
    printf ("Enter n = ");
    scanf ("%d", &n);

    // Output data
    printf ("n! = %ld", getFac (n));
        getchar();
    getchar();
}

long int getFac (int n) {
    if (n == 0) return 1;
    return getFac(n - 1) * n;
}
