#include <bits/stdc++.h>
using namespace std;

void printArrrrArry(int *Arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << Arr[i] << " ";
    }
    cout << endl;
}

void insertionSort(int *Arr, int n)
{
    int key, j;

    for (int i = 1; i <= n - 1; i++)
    {
        key = Arr[i];
        j = i - 1;

        while (j >= 0 && Arr[j] > key)
        {
            Arr[j + 1] = Arr[j];
            j--;
        }
        Arr[j + 1] = key;
    }
}

int mArrin()
{
    int n;
    cin >> n;

    int Arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>Arr[i];
    }
    cout<<"Unsorted :";

    printArrrrArry(Arr, n);
    insertionSort(Arr, n);
    cout<<"Sorted   :";
    printArrrrArry(Arr, n);
    return 0;
}
