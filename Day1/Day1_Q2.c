//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/
#include<stdio.h>
int main(){
    int a;
    printf("enter the first number");
    scanf("%d",&a);
    int b;
    printf("enter the second number");
    scanf("%d",&b);
    int sum =a+b;
    int difference = a-b;
    int product =a*b;
    int qoutient=a/b;
    printf(" sum = %d \n",sum);
    printf("difference = %d\n",difference);
    printf("product= %d\n",product);
    if( b ==0){
        printf("qoutient = not defined");
    }
    else{
        printf("qoutient = %d\n",qoutient);

    }


    return 0;
}