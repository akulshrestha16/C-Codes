//Kadane's algorithm.
#include<iostream>
using namespace std;
int subarray(int a[],int n)
{
  int res = a[0];
  int maxend =a[0];
  for(int i=1 ; i< n ; i++)
  {
    maxend = max(maxend + a[i],a[i]);
    res = max(maxend,res);
  }
  return res;
}
int main()
{
  int arr[] = {-3,8,-2,4,-5,6};
  int size = sizeof(arr)/sizeof(arr[0]);
  cout<<"Maximun consecutive Ones "<<subarray(arr,size);
}
