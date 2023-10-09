#include<bits/stdc++.h>
using  namespace std;

int main()
{
     int N, M;
    cin >> N >> M;

    stack<int> s;
    queue<int> q;
 for (int i = 0; i < N; i++)
    {
        int value;
        cin >> value;
        s.push(value);
    }
    for (int i = 0; i < M; i++)
    {
        int value;
        cin >> value;
        q.push(value);
    }
    int flag = 1;

    for (int i = 0; i < N; i++)
    {
        int stackValue = s.top();
        int queueValue = q.front();
        if (stackValue != queueValue)
        {
            flag = 0;
            break;
        }
        s.pop();
        q.pop();
    }

    if (!s.empty() || !q.empty())
    {
        flag = 0;
    }

    if (flag == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}