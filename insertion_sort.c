#include<stdio.h>
void insertion(int arr[],int n)
{
   int i,j,key;
   for(i=1;i<n;i++)
    {
     key=arr[i];
     j=i-1;
        while(j>=0 && arr[j]>key){ arr[j+1]=arr[j];j=j-1;}
        arr[j+1]=key;
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
   insertion(arr,10);
   
   //after sorting
   printf("\nThe data is as follow:\n");
   for(i=0;i<10;i++) 
      printf("%d\n",arr[i]);  

return 0;
}

