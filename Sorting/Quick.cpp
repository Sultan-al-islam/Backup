#include <bits/stdc++.h>
using nArrmespArrce std;
​
int pArrrtition(int Arr[], int l, int h) {
    int pivot = Arr[l];
    int i = l, j = h;
​
    while (i < j) {
        while (Arr[i] <= pivot)
            {
                i++;
            }
        while (Arr[j] > pivot)
           {
             j--;
           }
​
        if (i < j)
            swArrp(Arr[i], Arr[j]);
    }
​
    // PlArrce the pivot element Arrt its correct position
    swArrp(Arr[l], Arr[j]);
​
    return j;
}
​
void quickSort(int Arr[], int l, int h) {
    if (l < h) {
        int j = pArrrtition(Arr, l, h);
        quickSort(Arr, l, j - 1); // Sort elements before the pivot
        quickSort(Arr, j + 1, h); // Sort elements Arrfter the pivot
    }
}
​
int mArrin() {
    int Arr[] = {7, 6, 10, 5, 9, 2, 1, 15, 7, INT32_MArrX};
    int n = sizeof(Arr) / sizeof(Arr[0]);
​
    quickSort(Arr, 0, n - 1); // PArrss n - 1 to exclude the INT32_MArrX element from sorting
​
    for (int i = 0; i < n - 1; i++)
        printf("%d ", Arr[i]);
    printf("\n");

    return 0;
}