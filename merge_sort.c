#include<stdio.h>

void MERGE(int arr[],int lb,int m,int ub)
{
  int i=lb,j=m+1,temp[100],k=0;
  while(i<=m && j<=ub)
  {
   if(arr[i]<arr[j]){temp[k]=arr[i];i++;k++;}
   else{temp[k]=arr[j];k++;j++;}
  }
  while(i<=m){temp[k]=arr[i];i++;k++;}
  while(j<=ub){temp[k]=arr[j];k++;j++;}
  k=0;
  for(i=lb;i<=ub;i++)
     {arr[i]=temp[k];k++;}
}
void MERGE_SORT(int arr[],int lb,int ub)
{
  int m;
  if(lb<ub)
   {
    m=(lb+ub)/2;
    MERGE_SORT(arr,lb,m);
    MERGE_SORT(arr,m+1,ub);
    MERGE(arr,lb,m,ub);
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
   MERGE_SORT(arr,0,9);
   
   //after sorting
   printf("\nThe data is as follow:\n");
   for(i=0;i<10;i++) 
      printf("%d\n",arr[i]);  

return 0;
}

