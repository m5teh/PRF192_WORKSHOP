#include<stdio.h>

int main() {
    for (int i = 0; i < 255; ++ i) {
        printf ("|%c|%3d|%3o|%3X|\n", i, i, i, i);
        if (i != 0 && i % 20 == 0) getchar();
    }
    getchar();
}
