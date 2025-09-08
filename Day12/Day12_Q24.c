// Q24: Write a program to calculate electricity bill based on units consumed with these rates: 
// First 100 units at ₹5/unit 
// Next 100 units at ₹7/unit 
// Next 100 units at ₹10/unit 
// Above at ₹12/unit

// Sample Test Cases:
// Input 1:
// 50
// Output 1:
// Bill: ₹250

// Input 2:
// 150
// Output 2:
// Bill: ₹850

// Input 3:
// 250
// Output 3:
// Bill: ₹1700

#include<stdio.h>
int main(){
    int n ;
    printf("Enter The Number of units consumed");
    scanf("%d",&n);
    if(n<=100){
        printf("Bill:₹%d",n*5);
    }
    else if(n>100 && n<=200)
        printf("Bill:₹%d",(n-100)*7+500);
    else if(n>200 && n<=300)
        printf("Bill:₹%d",(n-200)*10+1200);
    else{
        printf("Bill:₹%d",(n-300)*12+2200);
    }

    return 0;
}