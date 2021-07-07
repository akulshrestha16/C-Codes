#include<iostream>
using namespace std;

int largestNumber(int a[],int n)
{
  int max = a[0];
  for(int i = 1 ; i < n ; i++)
  {
    if(a[i] > max)
    {
      max = a[i];
    }
  }
  return max;
}

int main()
{
  int arr[] = {6,4,13,11,2};
  int size = sizeof(arr)/sizeof(arr[0]);
  cout<<largestNumber(arr,size);
}
