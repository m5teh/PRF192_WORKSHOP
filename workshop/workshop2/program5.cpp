#include<stdio.h>
#include<ctype.h>

int main () {
    char c;
    int numV = 0, numC = 0, numO;
    do {
        c = getchar();
        c = toupper(c);
        if (c >= 'A' && c <= 'Z') {
            switch (c) {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                ++ numV;
                break;
            default:
                ++ numC;
            }
        }
        else if (c != 10) {
            ++ numO;
        }
    }
    while (c != 10);
    printf ("Number of vowels: %d\nNumber of consonants: %d\nNumber of other characters: %d\n", numV, numC, numO);
    getchar();
}
