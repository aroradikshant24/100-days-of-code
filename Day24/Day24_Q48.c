// Q48: Write a program to print the following pattern:
// 1
// 12
// 123
// 1234
// 12345


// Sample Test Cases:
// Input 1:

// Output 1:
// 1
// 12
// 123
// 1234
// 12345
#include<stdio.h>
int main(){
    for(int j=1;j<=5;j++){
        for(int i=1;i<=j;i++){
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}

