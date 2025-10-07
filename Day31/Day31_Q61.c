// Q61: Search for an element in an array using linear search.

#include <stdio.h>

int main() {
    int n, i, target;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &target);

    for (i = 0; i < n; i++) {
        if (arr[i] == target) {
            printf("Found at index %d\n", i);
            return 0;
        }
    }

    printf("-1\n");
    return 0;
}