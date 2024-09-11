#include <stdio.h>

int findLargest(int arr[], int n) {
    if (n == 1) {
        return arr[0];
    }
    int largest = findLargest(arr, n - 1);
    return (arr[n - 1] > largest) ? arr[n - 1] : largest;
}

int main() {
    int n, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("The largest element in the array is %d\n", findLargest(arr, n));
    return 0;
}
