#include <bits/stdc++.h>
using namespace std;

class Activitiy
{
public:
    int start, end;
};

// bool comp(Activitiy act1, Activitiy act2)
// {
//     return (act1.end < act2.end);
// }

int main()
{
    // int n;
    // cin >> n;
     Activitiy actArr[] = {{5, 9}, {1, 2}, {3, 4}, {0, 6}, {5, 7}, {8, 9}};
     int n = 6;
    // Activitiy actArr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> actArr[i].start >> actArr[i].end;
    // }

    // sort(actArr, actArr + n, comp);
    
    for (int i = 0; i < n - 1; i++) {
        
        for (int j = i + 1; j < n; j++) {
            if (actArr[j].end < actArr[i].end) {
                swap(actArr[i],actArr[j]);
            }
        }
      
    }

    cout << "Selected Activities are: " << endl;

    int i = 0;
    int cnt = 1;
    cout << "Activity: " << i << " , Start: " << actArr[i].start << " End: " << actArr[i].end << endl;

    for (int j = 1; j < n; j++)
    {
        if (actArr[j].start >= actArr[i].end)
        {
            cnt++;
            cout << "Activity: " << j << " , Start: " << actArr[j].start << " End: " << actArr[j].end << endl;
            i = j;
        }
    }
    cout << "Max Activity:" << cnt;

    return 0;
}
