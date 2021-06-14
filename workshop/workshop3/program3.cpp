#include<stdio.h>
#include<math.h>
#define EPS 1e-7
int getPos (double x, double y, double r);

int main () {
    // Declare
    double x, y, r;
    int res;

    // Enter data
    printf ("Enter x, y: ");
    scanf ("%lf %lf", &x, &y);
    do {
        printf ("Enter r = ");
        scanf ("%lf", &r);
    }
    while (r < 0);
    // Get position
    res = getPos (x, y, r);

    // output data
    if (res == 1) printf ("IN");
    else if (res == 0) printf ("OUT");
    else printf ("ON");

    getchar();
    getchar();
}

// Get position function
int getPos (double x, double y, double r) {
    double d = sqrt (x * x + y * y);
    if (abs (d - r) <= EPS) return -1;
    if (d < r) return 1;
    return 0;
}
