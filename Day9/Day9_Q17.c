// Q17: Write a program to find the roots of a quadratic equation and categorize them.
// Sample Test Cases:
// Input 1:
// 1 -3 2
// Output 1:
// Roots are real and different: 2, 1
// Input 2:
// 1 -2 1
// Output 2:
// Roots are real and same: 1
// Input 3:
// 1 2 5
// Output 3:
// Roots are complex
#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    printf("Enter a b c");
    scanf("%d %d %d ",&a,&b,&c);
    double d=b*b-4*a*c;
    double root1=-b+sqrt(d)/2*a;
    double root2=-b-sqrt(d)/2*a;
    if(d>0)
        printf("Roots Are Real And Different %d %d",a,b);
    else if(d==0)
        printf("Roots Are Real and Same %d ",a);
    else 
        printf("Roots Are Complex %d %d",a,b);
    return 0;
}
