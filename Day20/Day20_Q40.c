// Q40: Write a program to find the 1’s complement of a binary number and print it.

// Sample Test Cases:
// Input 1:
// 1010
// Output 1:
// 0101

// Input 2:
// 1111
// Output 2:
// 0000


#include <stdio.h>

int main() {
    int n;
    printf("Enter a binary number: ");
    scanf("%d", &n);

    int lastdigit, comp = 0, pow = 1;

    while (n != 0) {
        lastdigit = n % 10;   // extract last binary digit

        // flip 0->1 and 1->0
        if (lastdigit == 0)
            lastdigit = 1;
        else
            lastdigit = 0;

        comp = comp + lastdigit * pow;  // place in correct position
        pow = pow * 10;                 // move to next digit

        n = n / 10;                     // remove last digit
    }

    printf("1's Complement: %d\n", comp);
    return 0;
}