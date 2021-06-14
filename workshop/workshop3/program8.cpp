#include<stdio.h>
double makeDouble(int  ipart, int fraction);
int main () {
    int ipart, fpart;
    printf ("Enter integral part: ");
    scanf ("%d", &ipart);
    do {
        printf ("Enter fractional part: ");
        scanf ("%d", &fpart);
    }
    while (fpart < 0);

    printf ("%lf", makeDouble (ipart, fpart));
        getchar();
    getchar();
}

double makeDouble(int ipart, int fraction) {
    double d_f= fraction;

    while (d_f >= 1) d_f = d_f / 10;
    if (ipart < 0) return ipart - d_f;
    return ipart + d_f;
}
