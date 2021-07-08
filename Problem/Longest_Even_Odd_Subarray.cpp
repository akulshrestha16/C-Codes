#include<iostream>
using namespace std;

int evenOld(int a[],int n)
{
  int count = 1;
  int result = 0;
  for(int i =1;i < n ;i++)
  {
    if((a[i-1] % 2 == 0) && (a[i] % 2 != 0))
    {
      ++count;
    }
    else if((a[i -1] % 2 != 0) && (a[i] % 2 == 0))
    {
      ++count;
    }
    else
    {
      count = 1;
    }

    if(count > result)
    {
      result = count;
    }
  }
  return result;
}
int main()
{
  int arr[] = {2,8,7,4,5,6};
  int size = sizeof(arr)/sizeof(arr[0]);
  cout<<"Longest Even Odd Subarray "<<evenOld(arr,size);
}
