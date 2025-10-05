// Q55: Write a program to print all the prime numbers from 1 to n.


// Sample Test Cases:
// Input 1:
// 10
// Output 1:
// 2 3 5 7

// Input 2:
// 20
// Output 2:
// 2 3 5 7 11 13 17 19

#include <stdio.h>
#include <math.h> 

int isPrime(int num) {

    if (num <= 1) {
        return 0; 
    }

    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return 0; 
        }
    }
   
    return 1; 
}

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    
    printf("\n"); 

    return 0;
}