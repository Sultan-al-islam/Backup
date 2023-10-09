#include<stdio.h>
void insertion_sort(int *a,int n,int pos,int val)
{
    for(int i=n;i>=pos+1;i--)
     {
        a[i]=a[i-1];
     }
     a[pos]=val;
     
     for(int i=0;i<=n;i++)
     {
        printf("%d ",a[i]);
     }

}

int main()
    {
       int n;
       scanf("%d",&n);
       int a[n+1];
       for(int i=0;i<n;i++)
       {
        scanf("%d",&a[i]);
       }
       int pos,val;
     printf("Enter Position:");
     scanf("%d",&pos);
     printf("Enter valu:");
     scanf("%d",&val);
     insertion_sort(a,n,pos,val);

      return 0;
    }
