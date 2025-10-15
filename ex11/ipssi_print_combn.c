#include <stdio.h>

void ipssi_print_combn(int n)

{
    if (n < 1 || n > 9) {
        return;
    }

    int digits[9];
    for (int i = 0; i < n; i++) {
        digits[i] = i;
    }

    while (1) {
        for (int i = 0; i < n; i++) {
            putchar(digits[i] + '0');
        }
        if (digits[0] == 10 - n) {
            break;
        }
        putchar(',');
        putchar(' ');

        int i;
        for (i = n - 1; i >= 0; i--) {
            if (digits[i] < 10 - (n - i)) {
                digits[i]++;
                for (int j = i + 1; j < n; j++) {
                    digits[j] = digits[j - 1] + 1;
                }
                break;
            }
        }
    }
    putchar('\n');
}

int main (){
    ipssi_print_combn(2);
    return 0;
}