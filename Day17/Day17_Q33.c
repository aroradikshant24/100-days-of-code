// Q33: Write a program to check if a number is an Armstrong number.

// Sample Test Cases:
// Input 1:
// 153
// Output 1:
// Armstrong

// Input 2:
// 123
// Output 2:
// Not Armstrong

#include<stdio.h>
int main(){
    int n;
    printf("Enter The Number :");
    scanf("%d",&n);
    int lastdigit=0;
    int arm=0;
    int temp=n;
    while(n!=0){
        lastdigit=n%10;
        arm=arm+(lastdigit*lastdigit*lastdigit);
        n=n/10;
    }
    if(temp==arm){
        printf("Armstrong");
    }
    else{
        printf("Not Armstrong");
    }
    
    return 0;
}