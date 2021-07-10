#include<iostream>
using namespace std;

int oddOccurring(int a[],int n)
{
  int result = 0;
  for(int i = 0 ; i < n ; i++)
  {
    result ^ a[i];
  }
  return result;
}

int main()
{
  int arr[] = {12,12,13,14,14};
  int size = sizeof(arr)/sizeof(arr[0]);
  cout<<"The odd occurring element is "<<oddOccurring(arr,size);
  return 0 ;
}
