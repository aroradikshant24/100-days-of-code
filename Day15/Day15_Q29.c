// Q29: Write a program to calculate the factorial of a number.

// Sample Test Cases:
// Input 1:
// 5
// Output 1:
// 120

// Input 2:
// 3
// Output 2:
// 6
#include<stdio.h>
int main(){
    int n;
    printf("Enter The Number :");
    scanf("%d",&n);
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    printf("The factorial of %d is %d",n ,fact);

    return 0;
}
