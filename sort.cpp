
// c++ sorting function sort()
// for sort(), we have to include the header file <bits/stdc++.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
  int arr[]={5,6,4,3,8,9,2,1};
  int n=8,i;
  //for ascending sorting
  sort(arr,arr+n);
  cout<<"The Sorted array:\n";
  for(i=0;i<n;i++)
     cout<<arr[i]<<" ";
     cout<<"\n";
     
   //for decending sorting
   sort(arr,arr+n, greater<int>());
   cout<<"The Decending order array is \n";
   for(i=0;i<n;i++)
       cout<<arr[i]<<" ";
       cout<<"\n";
       
       
     
     
  return 0;
}
