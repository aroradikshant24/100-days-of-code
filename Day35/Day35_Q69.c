// Q69: Find the second largest element in an array.

#include <stdio.h>
#include <limits.h>

int findSecondLargest(int arr[], int n) {
    int first = INT_MIN, second = INT_MIN;
    for (int i = 0; i < n; i++) {
    if (arr[i] > first) {
    second = first;
    first = arr[i];
    } else if (arr[i] > second && arr[i] < first) {
    second = arr[i];
    }
    }
    return second;
}
int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int result = findSecondLargest(arr, n);
    if (result != INT_MIN) {
        printf("Second largest element is: %d\n", result);
    } else {
        printf("Array does not have enough distinct elements.\n");
    }
    return 0;
}