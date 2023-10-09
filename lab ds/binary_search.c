#include<stdio.h>

int binarySearch(int arr[], int size, int element){ 
    int low, mid, high;
    low = 0;
    high = size-1;
   
    while(low<=high){
        mid = (low + high)/2;
        if(arr[mid] == element){
            return mid;
        }
        if(arr[mid]<element){
            low = mid+1;
        }
        else{
            high = mid -1;
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
  int index =binarySearch(a,n,val);
  
  if(index == -1)
  {
    printf("%d was not found\n",val);

  }
  else
  printf("%d was found in positon %d\n",val,index+1);
   
  
    
    return 0;
}

