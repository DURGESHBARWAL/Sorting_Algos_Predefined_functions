#include<stdio.h>
int temp;
void swap(int *a,int *b)
{
   temp=*a;
   *a=*b;
   *b=temp;
}   
void heapify(int arr[],int n,int i)
{
   int large=i;
   int l=2*i+1;
   int r=2*i+2;
   
   if(l<n && arr[l]>arr[large])
     large=l;
   if(r<n && arr[r]>arr[large])
      large=r;
   if(large!=i)
   {
       swap(arr+i,arr+large);
       heapify(arr,n,large);
   }     
}   

void heap_sort(int arr[],int n)
{
  int i;
  for(i=n/2-1;i>=0;i--)
      heapify(arr,n,i);
  for(i=n-1;i>=0;i--)
     {
       swap(arr+0,arr+i);
       heapify(arr,i,0);
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
   heap_sort(arr,10);
   
   //after sorting
   printf("\nThe data is as follow:\n");
   for(i=0;i<10;i++) 
      printf("%d\n",arr[i]);  

return 0;
}

