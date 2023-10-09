#include<stdio.h>

void delet_arry(int *a,int n,int pos)
{
    for(int i=pos;i<n-1;i++)
       {
        a[i]=a[i+1];
       }
       for(int i=0;i<n-1;i++)
       {
        printf("%d ",a[i]);
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
       int pos;
       printf("Enter Position you delet:");
       scanf("%d",&pos);
      delet_arry(a,n,pos);
      return 0;
    }
