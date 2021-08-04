#include<stdio.h>
int sum(int arr[], int n) {
    int s = 0;
    int i;
    for (i=0;i<n;i++){
        s += arr[i];
    }
    return s;
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