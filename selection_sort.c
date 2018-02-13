#include<stdio.h>
void selection(int arr[],int n)
{
   int i,j,small,pos;
   for(i=0;i<n-1;i++)
    {
     small=arr[i];
     pos=i;
     for(j=i+1;j<n;j++)
        {
         if(arr[j]<small)
           {pos=j;small=arr[j];}
        }
      if(pos!=i){arr[pos]=arr[i];arr[i]=small;}  
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
   selection(arr,10);
   
   //after sorting
   printf("\nThe data is as follow:\n");
   for(i=0;i<10;i++) 
      printf("%d\n",arr[i]);  

return 0;
}

