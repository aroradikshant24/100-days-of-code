// Q58: Find the maximum and minimum element in an array.


// Sample Test Cases:
// Input 1:
// 5
// 2 9 1 4 7
// Output 1:
// Max=9, Min=1

// Input 2:
// 3
// 10 10 10
// Output 2:
// Max=10, Min=10

#include <stdio.h>

int main() {
    int n;
    
   
    scanf("%d", &n);


    if (n <= 0) {
        printf("Invalid array size.\n");
        return 1; 
    }

    int arr[n]; 
    int max_val, min_val;


    scanf("%d", &arr[0]);

    
    max_val = arr[0];
    min_val = arr[0];

    
    for (int i = 1; i < n; i++) {
        scanf("%d", &arr[i]); 


        if (arr[i] > max_val) {
            max_val = arr[i];
        }
        
       
        if (arr[i] < min_val) {
            min_val = arr[i];
        }
    }


    printf("Max=%d, Min=%d\n", max_val, min_val);

    return 0; 
}