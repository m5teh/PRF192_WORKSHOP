#include<stdio.h>

int isFib (int n);
int main () {
    int n;
    // Input data
    printf ("Enter n = ");
    scanf ("%d", &n);

    // Output data
    if (isFib (n)) {
        printf ("YES");
    }
    else {
        printf ("NO");
    }
        getchar();
    getchar();
}

int isFib (int n) {
    int t1 = 1, t2 = 1, t = 1;
    if (n < 1) return 0;
    if (t == n) return 1;
    for (int i = 3; i <= 30; ++ i) {
        t = t1 + t2;
        t2 = t1;
        t1 = t;
        if (t == n) return 1;
    }
    return 0;
}
