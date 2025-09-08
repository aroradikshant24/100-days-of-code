// Q22: Write a program to find profit or loss percentage given cost price and selling price.


// Sample Test Cases:
// Input 1:
// 1000 1200
// Output 1:
// Profit 20%

// Input 2:
// 1000 800
// Output 2:
// Loss 20%

// Input 3:
// 1000 1000
// Output 3:
// No Profit No Loss

#include<stdio.h>
int main(){
    int cp;
    printf("Enter The Cost Price");
    scanf("%d",&cp);
    int sp;
    printf("Enter The Selling Price");
    scanf("%d",&sp);
    int profit=((sp-cp)*100)/cp;
    int loss=((cp-sp)*100)/cp;

    if(sp>cp){
        printf("%d",profit);
    }
    else if(cp>sp){
        printf("%d",loss);
    }
    else{
        printf(" No Profit No Loss");
    }
     
    return 0;
}