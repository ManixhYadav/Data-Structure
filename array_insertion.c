#include <stdio.h>
int main() {
    int arr[100] = {1,2,3,4,5}, n=5, pos=2, val=99;

    for(int i=n; i>pos; i--) {
        arr[i] = arr[i-1];
    }
    arr[pos] = val;
    n++;

    for(int i=0; i<n; i++)
        printf("%d ", arr[i]);
}