// Q4: Write a program to calculate the area and circumference of a circle given its radius.
// Sample Test Cases:
// Input 1:
// 7
// Output 1:
// Area=153.94, Circumference=43.96

// Input 2:
// 3
// Output 2:
// Area=28.27, Circumference=18.85

#include<stdio.h>
int main(){
    int r;
    printf("enter the radius of circle ");
    scanf("%d ",&r);
    float pi=3.14;
    int area =pi*r*r;
    int perimeter=2*pi*r;
printf("The area of circle is %d\n",area);
printf("The perimeter of circle is %d",perimeter);
    return 0;
}