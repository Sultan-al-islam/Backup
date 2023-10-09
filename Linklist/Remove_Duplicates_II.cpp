#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> ML;

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        ML.push_back(val);
    }
    
    ML.sort();
    ML.unique();
    
     for (int val : ML)
    {
        cout << val <<" ";
    }

    return 0;
}