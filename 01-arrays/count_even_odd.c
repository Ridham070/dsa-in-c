#include <stdio.h>
int main() {
    int a[] = {2, 5, 8, 11, 14};
    int n = 5;
    int even = 0, odd = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    printf("Even numbers: %d\n", even);
    printf("Odd numbers: %d\n", odd);

    return 0;
}
