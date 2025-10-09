// Q65: Search in a sorted array using binary search.

#include <stdio.h>

int binarySearch(int arr[], int n, int key) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

int main() {
    int n, key;
    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &n);
int arr[n];
    printf("Enter the elements of the sorted array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search for: ");
    scanf("%d", &key);
    int result = binarySearch(arr, n, key);
    if (result != -1) {
        printf("Found at index %d\n", result);
    } else {
        printf("-1\n");
    }

    return 0;
}