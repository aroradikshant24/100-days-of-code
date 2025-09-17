// Q39: Write a program to find the product of odd digits of a number.

// Sample Test Cases:
// Input 1:
// 12345
// Output 1:
// 15 (1*3*5)

// Input 2:
// 2468
// Output 2:
// 1 (no odd digits, assume 1)
#include<stdio.h>
int main(){
    int n;
    printf("Enter The Number");
    scanf("%d",&n);
    int product=1;
    int lastdigit=1;
   while(n!=0){
    lastdigit=n%10;
    if(lastdigit%2!=0){
        product=product*lastdigit;
    }
    n=n/10;
   }
   printf("%d",product);
    return 0;
}



