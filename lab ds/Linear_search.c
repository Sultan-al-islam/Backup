#include<stdio.h>
 
int linearSearch(int arr[], int size, int element){
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==element){
            return i;
        }
    }
    return -1;
}
 

 
int main(){
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
  int index =linearSearch(a,n,val);
  
  if(index == -1)
  {
    printf("%d was not found\n",val);

  }
  else
  printf("%d was found in positon %d\n",val,index+1);
   
  
    
    return 0;
}
