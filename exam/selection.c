#include<stdio.h>
void printArray(int* a, int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
void selection_sort(int *a, int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }

        }
    }

}
int main()
    {
       
        int n;
      scanf("%d",&n);
      int a[n];
      for(int i=0;i<n;i++)
      {
        scanf("%d",&a[i]);
      }
      printf("Unsorted Array:");
      printArray(a,n);
      selection_sort(a,n);
       printf("Sorted Array:");
       printArray(a,n);

      return 0;
    }
