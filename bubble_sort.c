#include<stdio.h>
int temp;
void swap(int *a,int *b)
{   
   temp=*a;
   *a=*b;
   *b=temp;
}
void bubble(int arr[],int n)
{
   int i,j,ex;
   for(i=0;i<n-1;i++){
     ex=0;
     for(j=0;j<n-i-1;j++)
        if(arr[j]>arr[j+1])
          {
          ex=1; 
          swap(arr+j,arr+j+1);
          }
        if(ex==0) break;  
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
   bubble(arr,10);
   
   //after sorting
   printf("\nThe data is as follow:\n");
   for(i=0;i<10;i++) 
      printf("%d\n",arr[i]);  

return 0;
}

