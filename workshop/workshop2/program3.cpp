#include<stdio.h>

int main () {
    int sum = 0, i = 1;
    for (int x = 1; x != 0; ++ i) {
        printf ("Enter the number %d:", i);
        scanf ("%d", &x);
        sum += x;
    }
    printf ("Sum of %d numbers: %d", i - 2, sum);
    getchar ();
    getchar ();
}
