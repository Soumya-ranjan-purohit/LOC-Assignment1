<<<<<<< HEAD
#include <stdio.h>

void bubble_sort(int arr[], int n);

int main() {
    int arr[] = {5, 2, 7, 1, 9};
    int n = sizeof(arr)/sizeof(arr[0]);

    
    printf("Array before sorting: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    
    bubble_sort(arr, n);

    
    printf("Array after sorting: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

void bubble_sort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
=======
#include <stdio.h>

void bubble_sort(int arr[], int n);

int main() {
    int arr[] = {5, 2, 7, 1, 9};
    int n = sizeof(arr)/sizeof(arr[0]);

    
    printf("Array before sorting: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    
    bubble_sort(arr, n);

    
    printf("Array after sorting: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

void bubble_sort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
>>>>>>> 3eccf9c650c4d34295ebdd652a8b0860f54402f1
}