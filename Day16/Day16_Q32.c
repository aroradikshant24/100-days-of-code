// Q32: Write a program to check if a number is a palindrome.

// Sample Test Cases:
// Input 1:
// 121
// Output 1:
// Palindrome

// Input 2:
// 123
// Output 2:
// Not palindrome

#include<stdio.h>
int main(){
    int n;
    printf("Enter The Number :");
    scanf("%d",&n);
    int rev=0;
    int temp=n;
    while(n!=0){
        rev=rev*10;
        rev=rev+n%10;
        n=n/10;
    }
if(temp==rev)
    printf("Palindrome");
else
   printf("Not Palindrome");    
    return 0;
}