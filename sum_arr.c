#include<stdio.h>
int sum(int arr[], int n) {
    for (int i=0;i<n;i++){
        arr[i] += 5;
    }
    Return arr[n-1];
}
int main() {
    int arr[100];
    int i,j,k,n;
    printf("Enter size of array ");
    // take array size input
    for(i=0;i<n;i++)
    {
        // take array elements input
    }
    printf("sum of the elements of this array is %d", sum(arr, n));
    return 0;
}