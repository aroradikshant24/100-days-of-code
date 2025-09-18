// Q41: Write a program to swap the first and last digit of a number.


// Sample Test Cases:
// Input 1:
// 1234
// Output 1:
// 4231

// Input 2:
// 1001
// Output 2:
// 1001

#include <stdio.h>
#include <math.h> 

int main() {
    int num, swappedNum;
    int firstDigit, lastDigit, digits;
    int powerOf10;


    printf("Enter a number: ");
    scanf("%d", &num);


    if (num < 10) {
        swappedNum = num;
    } else {

        lastDigit = num % 10;

       
        digits = (int)log10(num);
        powerOf10 = (int)pow(10, digits);

       
        firstDigit = num / powerOf10;


        int middleNum = num % powerOf10; 
        middleNum = middleNum / 10;       

        
        swappedNum = (lastDigit * powerOf10) + (middleNum * 10) + firstDigit;
    }

  
    printf("Number after swapping first and last digit: %d\n", swappedNum);

    return 0;
}