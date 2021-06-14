#include<stdio.h>

long int getFib (int n);
int main () {
    int n;
    // Input data
    printf ("Enter n = ");
    scanf ("%d", &n);

    // Output data
    printf ("Fibonacci n = %ld", getFib (n));
        getchar();
    getchar();
}

long int getFib (int n) {
    long int t1 = 1, t2 = 1, t = 1;
    for (int i = 3; i <= n; ++ i) {
        t = t1 + t2;
        t2 = t1;
        t1 = t;
    }
    return t;
}
