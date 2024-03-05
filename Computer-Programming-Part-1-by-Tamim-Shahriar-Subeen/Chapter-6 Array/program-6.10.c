#include <stdio.h>

int main() {
    int ara[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    int i, temp;

    // Loop to reverse the elements in the array
    for (i = 0; i < 5; i++) {
        // Swap elements using a temporary variable
        temp = ara[i];
        ara[i] = ara[9 - i];
        ara[9 - i] = temp;
    }

    // Loop to print the reversed array
    for (i = 0; i < 10; i++) {
        printf("%d\n", ara[i]);
    }

    return 0;
}
