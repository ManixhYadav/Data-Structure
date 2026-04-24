#include <stdio.h>

int main() {
    int a[5] = {5, 3, 4, 1, 2};

    for (int i = 1; i < 5; i++) {
        int key = a[i], j = i - 1;
        while (j >= 0 && a[j] > key) {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }

    for (int i = 0; i < 5; i++)
        printf("%d ", a[i]);
}