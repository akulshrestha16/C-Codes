#include<iostream>
using namespace std;

void moveNegative(int a[],int n)
{
  int end = 0;
  for(int i = 0 ; i < n; i++)
  {
    if(a[i] < 0)
    {
      if( i!= end)
      {
        swap(a[i],a[end]);
      }
      end++;
    }
  }
  for(int i = 0 ; i < n; i++)
  {
    cout<<a[i]<<" ";
  }
}

int main()
{
  int arr[] = {2,-8,7,-4,-5,6};
  int size = sizeof(arr)/sizeof(arr[0]);
  moveNegative(arr,size);
}
