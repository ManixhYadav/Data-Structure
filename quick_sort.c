#include <stdio.h>

void quicksort(int a[], int low, int high) {
    if (low < high) {
        int pivot = a[low], i = low, j = high;

        while (i < j) {
            while (a[i] <= pivot) i++;
            while (a[j] > pivot) j--;
            if (i < j) {
                int temp = a[i]; a[i] = a[j]; a[j] = temp;
            }
        }

        int temp = a[low]; a[low] = a[j]; a[j] = temp;

        quicksort(a, low, j - 1);
        quicksort(a, j + 1, high);
    }
}