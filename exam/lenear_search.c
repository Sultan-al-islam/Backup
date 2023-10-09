#include<stdio.h>
int leniar_search(int *a,int n,int val)
{
  for(int i=0;i<n;i++)
  {
    if(a[i]==val)
    {
      return i;
    }
  }
  return -1;


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
      int val;
      printf("Enter valu you found:");
      scanf("%d",&val);
      int index=leniar_search(a,n,val);

      if(index==-1)
      {
        printf("%d was no found!",val);
      }
      else
      {
        printf("%d was found in positon:%d",val,index+1);
      }
       

      return 0;
    }
