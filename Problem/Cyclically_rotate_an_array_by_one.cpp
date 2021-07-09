#include<iostream>
using namespace std;

void cyclicallyRotate(int arr[],int n)
{
    int temp = arr[n-1];
    for(int i = n-1 ;i > 0 ;i--)
    {
        arr[i] = arr[i-1];
    }
    arr[0]= temp;
    for(int i =0 ; i< n ; i++)
    {
      cout<<arr[i]<<" ";
    }
}
int main()
{
  int arr[]={2,12,5,3};
  int size = sizeof(arr)/sizeof(arr[0]);
  for(int i =0 ; i< size ; i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  cyclicallyRotate(arr,size);
}
