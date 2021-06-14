#include<stdio.h>
void input (int &n) {
    do {
        printf("Enter n = ");
        scanf ("%d", &n);
    }
    while (n < 0);
}
void printFib (int n) {
    long int t1 = 1, t2 = 1, t = 1;
    if (n == 1) {
        printf ("1\n");
        return;
    }
    if (n == 2) {
        printf ("1 1\n");
        return;
    }
    printf ("1 1 ");
    for (int i = 3; i <= n; ++ i) {
        t = t1 + t2;
        t2 = t1;
        t1 = t;
        printf ("%d ", t);
    }
    printf ("\n");
}
void do1 () {
    int n;
    input (n);
    printFib (n);
}
int check (int d, int m, int y) {
    if (d < 1 || d > 31 || m < 1 || m > 12) return 0;
    int maxd;
    switch (m) {
    case 4:
    case 6:
    case 9:
    case 11:
        maxd = 30;
        break;
    case 2:
        if (y % 400 == 0|| (y % 4 == 0 && y % 100 != 0)) maxd = 29;
        else maxd = 28;
        break;
    default:
        maxd = 31;
        break;
    }
    return d <= maxd;
}
void do2() {
    int d, m, y;
    printf ("Enter day, month, year: ");
    scanf ("%d%d%d", &d, &m, &y);
    if (check (d, m, y)) {
        printf ("valid\n");
    }
    else {
        printf ("invalid\n");
    }
}
void do3() {
    printf ("Thank you! :)\n");
}
int main () {
    int t;
    do {
        printf ("_______________________________________\n|1/ Fibonacci sequence                |\n|2/ Check a date                      |\n|3/ Quit                              |\n|_____________________________________|\nPlease choose your option: ");
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
