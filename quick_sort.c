#include<stdio.h>

void swap(int *a,int *b)
{
   int temp;
   temp=*a;
   *a=*b;
   *b=temp;
}

int PARTITION(int arr[],int lb,int ub)
{
  int i=lb,j=ub,temp;
  int pivot=arr[lb];
  while(i<j)
  {
      while(arr[i]<=pivot && i<=ub) i++;
      while(arr[j]>pivot && j>=lb)j--;
      if(i<j)
        swap(arr+i,arr+j);
  }
  temp=arr[lb];
  arr[lb]=arr[j];
  arr[j]=temp;
  return j;
}
void QUICKSORT(int arr[],int lb,int ub)
{
  int m;
  if(lb<ub)
   {
    m=PARTITION(arr,lb,ub);
    QUICKSORT(arr,lb,m-1);
    QUICKSORT(arr,m+1,ub);
   }
}

int main()
{
   int arr[10];
   //input 
   int i;
    printf("\nEnter the data :\n");
   for(i=0;i<10;i++)
      scanf("%d",&arr[i]);
    
    //soring
   QUICKSORT(arr,0,9);
   
   //after sorting
   printf("\nThe data is as follow:\n");
   for(i=0;i<10;i++) 
      printf("%d\n",arr[i]);  

return 0;
}

