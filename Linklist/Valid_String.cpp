#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        string s;
        cin >> s;

        stack<char> st;
        for (char ch : s)
        {
            if (ch == 'A' && !st.empty() && st.top() == 'B')
            {
                st.pop();
            }
            else if (ch == 'B' && !st.empty() && st.top() == 'A')
            {
                st.pop();
            }
            else
            {
                st.push(ch);
            }
        }

        if (st.empty())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}