#include <stdio.h>

int main() {
    int i, j;

    for (i = 0; i <= 8; i++) {
        for (j = i + 1; j <= 9; j++) {
            putchar(i + '0');
            putchar(',');
            putchar(' ');
            putchar(j + '0');
            if (i == 8 && j == 9) {
                continue;
            }
            putchar(',');
            putchar(' ');
        }
    }

    return 0;
}
