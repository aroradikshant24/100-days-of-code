// Q34: Write a program to check if a number is prime.


// Sample Test Cases:
// Input 1:
// 7
// Output 1:
// Prime

// Input 2:
// 10
// Output 2:
// Not prime
#include<stdio.h>
int main(){
    int n;
    printf("Enter The Number :");
    scanf("%d",&n);
    int a=0;
    for(int i=2;i<n;i++){
        if(n%i==0){
            a=1;
            break;
        }
    }

if(a==0){
   printf("Prime Number");
    }
else{
   printf("Not Prime Number");
    }
    return 0;
}

