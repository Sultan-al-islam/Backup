#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        vector<int> v;
        for (int i = 0; i < N; ++i)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }

        sort(v.begin(), v.end(), greater<int>());

        v.erase(unique(v.begin(), v.end()), v.end());

        for (int n : v)
        {
            cout << n << " ";
        }
        cout << endl;
    }

    return 0;
}