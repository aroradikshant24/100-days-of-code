// Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

// Sample Test Cases:
// Input 1:
// 3661
// Output 1:
// 1:1:1

// Input 2:
// 7322
// Output 2:
// 2:2:2

#include<stdio.h>
int main(){
    int t;
    printf("Enter The Time in Seconds");
    scanf("%d",&t);
    int sec,min,hr;
    hr=t/3600;
    min=(t%3600)/60;
    sec=t%60;
    printf("The Time is %d Hour %d min %d sec",hr,min,sec);
    return 0;
}