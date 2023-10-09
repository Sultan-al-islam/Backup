#include<stdio.h>
int main()
    {
       int n,x;
       scanf("%d %d",&n,&x);
       for(int i=0;i<x;i++)
       {
        for(int i=1;i<=n;i++)
        {
            printf("%d ",i);
        }
        printf("\n");
       }

      return 0;
    }
