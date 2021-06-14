#include<stdio.h>

int main () {
    double num1, num2;
    char op;

    scanf ("%lf %c %lf", &num1, &op, &num2);
    switch (op) {
    case '+':
        printf("%.3lf", num1 + num2);
        break;
    case '-':
        printf("%.3lf", num1 - num2);
        break;
    case '*':
        printf("%.3lf", num1 * num2);
        break;
    case '/':
        if (num2 == 0) {
            printf ("Divide by 0");
        }
        else {
            printf ("%.3lf", num1 / num2);
        }
        break;
    default:
        printf ("Operation is not supported");
    }
    getchar ();
    getchar ();
}
