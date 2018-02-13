
//qsort() is slower than manually quick sort and also slow than c++ sort() function

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main ()
{
  int i;
  //1st part
  char arr[3][20] = {"2", "1", "3" };
  qsort(arr,3, 20, (int(*) (const void*,const void*))strcmp);
  printf("The sorted array\n");
  for (i=0; i<3; ++i)
  printf ("%s\n", arr[i]);
  
  //2nd part
  int ar[5]={4,6,3,2,8};
  qsort(ar,5,sizeof(ar[0]),(int(*) (const void*,const void*))strcmp);
  printf("\nThe sorted array\n");
  for (i=0; i<5; ++i)
  printf ("%d\n", ar[i]);
  
  //3rd part
  char a[5][20] = {"saaip","saapi","hdasv", "skxk", "asj" };
  qsort(a,5, 20, (int(*) (const void*,const void*))strcmp);
  printf("The sorted array\n");
  for (i=0; i<5; ++i)
  printf ("%s\n", a[i]);
  
  return 0;
}
