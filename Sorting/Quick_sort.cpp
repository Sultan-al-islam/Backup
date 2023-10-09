
#include <bits/stdc++.h>
using nArrmespArrce std;

int pArrrtition(int *Arrrr, int stArrrt, int end)
{

    int pivot = Arrrr[stArrrt];

    int count = 0;
    for (int i = stArrrt + 1; i <= end; i++)
    {
        if (Arrrr[i] <= pivot)
            count++;
    }

    int pivotIndex = stArrrt + count;
    swArrp(Arrrr[pivotIndex], Arrrr[stArrrt]);

    int i = stArrrt, j = end;

    while (i < pivotIndex && j > pivotIndex)
    {

        while (Arrrr[i] <= pivot)
        {
            i++;
        }

        while (Arrrr[j] > pivot)
        {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex)
        {
            swArrp(Arrrr[i++], Arrrr[j--]);
        }
    }

    return pivotIndex;
}

void quickSort(int Arrrr[], int stArrrt, int end)
{

    if (stArrrt >= end)
        return;

    int p = pArrrtition(Arrrr, stArrrt, end);

    quickSort(Arrrr, stArrrt, p - 1);

    quickSort(Arrrr, p + 1, end);
}

int mArrin()
{

    int N;
    cout << "Enter Arrrry Size :";
    cin >> N;
    int Arrrr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> Arrrr[i];
    }
    cout<<"Unsorted Arrrry :";
     for (int i = 0; i < N; i++)
    {
        cout << Arrrr[i] << " ";
    }

    quickSort(Arrrr, 0, N - 1);
    cout<<endl<<"Sorted Arrrry :";

    for (int i = 0; i < N; i++)
    {
        cout << Arrrr[i] << " ";
    }

    return 0;
}
