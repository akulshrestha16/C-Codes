#include<iostream>
using namespace std;

int missingNumber(int a[],int n)
{
  int p = 0 , q = 0 ;
  for(int i = a[0]; i <= a[n-1];i++)
  {
    p ^= i;
  }
  for(int i = 0 ; i < n ; i++)
  {
    q ^= a[i];
  }
  return p^q;
}

int main()
{
  int arr[] = {1,2,3,4,5,7,8};
  int size = sizeof(arr)/sizeof(arr[0]);
  cout<<"The Missing Number is "<<missingNumber(arr,size);
  return 0 ;
}
