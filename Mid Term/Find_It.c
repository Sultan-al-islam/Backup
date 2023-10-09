#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
int val,count=0;
    scanf("%d", &val);

    for(int i=0; i<n; i++) {
        if(arr[i] == val) {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}
