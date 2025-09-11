// Q31: Write a program to take a number as input and print its equivalent binary representation.

// Sample Test Cases:
// Input 1:
// 10
// Output 1:
// 1010

// Input 2:
// 7
// Output 2:
// 111

#include<stdio.h>
int main(){
    int n;
    printf("Enter The Number :");
    scanf("%d",&n);
    long long binary=0;
    while(n!=0){
        binary=binary*10+n%2;
        n=n/2;
    }
    long long rev=0;
    while(binary!=0){
        rev=rev*10+binary%10;
        binary=binary/10;
    }

     printf("Binary Representation is :%lld",rev);

    return 0;
}
