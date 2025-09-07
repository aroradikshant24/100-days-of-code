// Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.


// Sample Test Cases:
// Input 1:
// A
// Output 1:
// Uppercase alphabet

// Input 2:
// a
// Output 2:
// Lowercase alphabet

// Input 3:
// 3
// Output 3:
// Digit

// Input 4:
// #
// Output 4:
// Special character


#include <stdio.h>
#include <ctype.h>  
int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if (isupper(ch)) {
        printf("It is an uppercase alphabet.\n");
    } else if (islower(ch)) {
        printf("It is a lowercase alphabet.\n");
    } else if (isdigit(ch)) {
        printf("It is a digit.\n");
    } else {
        printf("It is a special character.\n");
    }

    return 0;
}
