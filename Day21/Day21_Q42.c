// Q42: Write a program to check if a number is a perfect number.

// Sample Test Cases:
// Input 1:
// 6
// Output 1:
// Perfect number

// Input 2:
// 10
// Output 2:
// Not perfect number

#include<stdio.h>
#include<math.h>
int main(){
 int n;
 printf("Enter The Number ");
 scanf("%d",&n);
int fact=0;
for(int i=1;i<n;i++){
    if(n%i==0){
    fact=fact+i;
    }
}
if(n==fact){
    printf("Perfect Number");
}
else{
    printf("Not Perfect Number");
}
    return 0;
}