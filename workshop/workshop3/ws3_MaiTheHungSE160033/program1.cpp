#include<stdio.h>
#include<math.h>
int prime[1000000];

void eratos() {
    prime[1] = 1;
    for (int i = 2; i <= sqrt (1000000); ++ i) if (prime[i] == 0) {
        int j = 2 * i;
        while (j <= 1000000) {
            prime[j] = 1;
            j += i;
        }
    }
}
int main () {
    int n;
    printf ("Enter n = ");
    scanf ("%d", &n);

    eratos();

    for (int i = 2; i <= n; ++ i) {
        if (prime[i] == 0) {
            printf("%d ", i);
        }
    }
    getchar();
    getchar();
}
