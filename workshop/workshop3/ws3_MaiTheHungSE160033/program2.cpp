#include<stdio.h>
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
int main () {
    int d, m, y;
    printf ("Enter day, month, year: ");
    scanf ("%d%d%d", &d, &m, &y);
    if (check (d, m, y)) {
        printf ("valid");
    }
    else {
        printf ("invalid");
    }
    getchar();
    getchar();
}
