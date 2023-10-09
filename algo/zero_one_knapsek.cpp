#include <bits/stdc++.h>
using namespace std;

struct item
{
    string name;
    int price, weight;
};

int main()
{
    int n;
    cout << "Number of item :";
    cin >> n;
    int cap;
    cout << "Capasity = ";

    cin >> cap;
    item A[n];
    int B[n + 1][cap + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i].name >> A[i].weight >> A[i].price;
    }

    for (int i = 0; i <= n; i++)
    {
        B[i][0] = 0;
    }
    for (int i = 0; i <= cap; i++)
    {
        B[0][i] = 0;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= cap; j++)
        {
            if (j >= A[i - 1].weight)
            {
                B[i][j] = max(B[i - 1][j], (B[i - 1][j - A[i - 1].weight] + A[i - 1].price));
            }
            else
            {
                B[i][j] = B[i - 1][j];
            }
        }
    }

    cout << "Max profite:" << B[n][cap] << endl;

    vector<string> selectedItems;
    int i = n, j = cap;
    while (i > 0 && j > 0)
    {
        if (B[i][j] != B[i - 1][j])
        {
            selectedItems.push_back(A[i - 1].name);
            j -= A[i - 1].weight;
        }
        i--;
    }

    cout << "Selected Items:" << endl;
    for (int k = 0;k<=selectedItems.size()-1;k++)
    {
        cout << selectedItems[k] << endl;
    }
}
