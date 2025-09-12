// Q36: Write a program to find the HCF (GCD) of two numbers.

// Sample Test Cases:
// Input 1:
// 12 18
// Output 1:
// 6

// Input 2:
// 7 9
// Output 2:
// 1

#include<stdio.h>
int min(int a,int b){
    if (a>b) return b;
    else return a;
}
int main(){
    int a;
    printf("Enter The First Number");
    scanf("%d",&a);
     int b;
    printf("Enter The Second Number");
    scanf("%d",&b);
    int gcd =1;
    for(int i=1;i<=min(a,b);i++){
      if(a%i==0 && b%i==0){
         gcd=i;
      }
    }
    printf("%d",gcd);
    return 0;
}