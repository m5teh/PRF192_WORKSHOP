#include<stdio.h>
#define PERSONAL_PENDING_AMOUNT 9000000
#define ALIMONY_FOR_DEPENDENT 3600000
#define LEVEL0 0
#define LEVEL1 5000000
#define LEVEL2 10000000
#define LEVEL3 18000000
#define PERCENT1 5
#define PERCENT2 10
#define PERCENT3 15
#define PERCENT4 20
int main () {
    long long income, numberOfDependent;
    printf ("Enter your income:");
    scanf ("%ld", &income);
    printf ("Enter the number of your dependent:");
    scanf ("%ld", &numberOfDependent);

    long long taxableIncome = income - 12LL * (PERSONAL_PENDING_AMOUNT + numberOfDependent * ALIMONY_FOR_DEPENDENT);
    double incomeTax;

    if (taxableIncome <= LEVEL0) {
        incomeTax = 0;
    }
    else if (taxableIncome <= LEVEL1) {
        incomeTax = taxableIncome * PERCENT1 / 100.0;
    }
    else if (taxableIncome <= LEVEL2) {
        incomeTax = (LEVEL1 * PERCENT1 + (taxableIncome - LEVEL1) * PERCENT2) / 100.0;
    }
    else if (taxableIncome <= LEVEL3) {
        incomeTax = (LEVEL1 * PERCENT1 + (LEVEL2 - LEVEL1) * PERCENT2 + (taxableIncome - LEVEL2) * PERCENT3) / 100.0;
    }
    else {
        incomeTax = (LEVEL1 * PERCENT1 + (LEVEL2 - LEVEL1) * PERCENT2 + (LEVEL3 - LEVEL2) * PERCENT3 + (taxableIncome - LEVEL3) * PERCENT4) / 100.0;
    }

    printf ("Income tax: %.3lf", incomeTax);
    getchar ();
    getchar ();
}
