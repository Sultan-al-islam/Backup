#include <bits/stdc++.h>
using namespace std;

class Item
{
    public:
    string name;
    double weight, price, unitPrice;
};

// bool comp(Item i1, Item i2)
// {
//     return (i1.unitPrice > i2.unitPrice);
// }

void selection_sort(Item arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int start = i;
        for (int j = start + 1; j < n; j++)
        {
            if (arr[j].unitPrice > arr[start].unitPrice)
                start = j;
        }
        swap(arr[i], arr[start]);
    }
}

int main()
{
    int n;
    double capacity;
    cout << "Enter the number of items: ";
    cin >> n;

    Item arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].name >> arr[i].weight >> arr[i].price;
        arr[i].unitPrice = arr[i].price / arr[i].weight;
    }
    // sort(arr, arr + n, comp);
    selection_sort(arr, n);

    cout << "Enter the capacity of Knapsack : ";
    cin >> capacity;

    double profit = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i].weight <= capacity)
        {
            profit += arr[i].price;
            capacity -= arr[i].weight;
        }
        else
        {
            profit += arr[i].unitPrice * capacity;
            break;
        }
    }

    cout << "Profit: " << profit << endl;

    return 0;
}