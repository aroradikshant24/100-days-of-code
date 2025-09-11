// Q30: Write a program to reverse a given number.


// Sample Test Cases:
// Input 1:
// 1234
// Output 1:
// 4321

// Input 2:
// 100
// Output 2:
// 1

#include<stdio.h>
int main(){
    int n;
    printf("Enter The Number :");
    scanf("%d",&n);
    int rev =0;
    while(n!=0){
        rev=rev*10;
        rev=rev+n%10;
        n=n/10;
    }
   printf("The Reverse of Number is %d",rev);

    return 0;
}
