// Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
// Sample Test Cases:
// Input 1:
// 5 10
// Output 1:
// Area=50, Perimeter=30

// Input 2:
// 3 7
// Output 2:
// Area=21, Perimeter=20


#include<stdio.h>
int main(){
    int l;
    printf("enter the length of rectangle");
    scanf("%d ",&l);
     int b;
    printf("enter the breadth of rectangle");
    scanf("%d ",&b);
    int area =l*b;
    int perimeter=2*(l+b);
printf("The area of rectangle is %d\n",area);
printf("The perimeter of rectangle is %d",perimeter);
    return 0;
}