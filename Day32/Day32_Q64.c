// Q64: Find the digit that occurs the most times in an integer number.

#include <stdio.h>

int main() {
    int num, digit, maxCount = 0, mostFrequentDigit = -1;
    int count[10] = {0};  

    printf("Enter an integer: ");
    scanf("%d", &num);
    while (num > 0) {
        digit = num % 10;
        count[digit]++;
        num /= 10;
    }
    for (digit = 0; digit < 10; digit++) {
        if (count[digit] > maxCount) {
            maxCount = count[digit];
            mostFrequentDigit = digit;
        }
    }

    printf("Most frequent digit: %d\n", mostFrequentDigit);
    return 0;
}