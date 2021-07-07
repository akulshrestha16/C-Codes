#include<iostream>
using namespace std;

int secondLargest(int a[],int n)
{
  int max, secondMax;
  if(a[1] < a[0])
  {
    max = a[0];
    secondMax = a[1];
  }
  else
  {
    max = a[1];
    secondMax = a[0];
  }
  for(int i = 0 ; i < n ; i++)
  {
    if(a[i] > max)
    {
      secondMax = max;
      max = a[i];
    }
    if(a[i] > secondMax && a[i] < max)
    {
      secondMax =a[i];
    }
  }
  return secondMax;
}

int main()
{
  int arr[] = {1,1,2,3,8};
  int size = sizeof(arr)/sizeof(arr[0]);
  if(size <= 1)
  {
    cout<<"Enter atleast two number"<<endl;
  }
  else
  {
    cout<<secondLargest(arr,size);
  }
}
