#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter Arry Size :";
    cin >> n;
    int Arry[n];
    for (int i = 0; i < n; i++)
    {
        cin >> Arry[i];
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(Arry[i]>Arry[j])
            {
                swap(Arry[i],Arry[j]);

            }
        }
    }
    cout<<"Sorted Arry:";
    for (int i = 0; i < n; i++)
    {
        cout << Arry[i] << " ";
    }

    return 0;
}