#include<iostream>
#include<unordered_set>
using namespace std;
int Unionarrays(int a[], int b[],int n , int m)
{
  int c[n+m];
  for(int i = 0 ; i< n+m ; i++)
  {
    if(i < n)
    {
      c[i] = a[i];
    }
    else
    {
      c[i] = b[i - n];
    }
  }
  unordered_set <int> cam;
  for(int i = 0 ; i< n+m ; i++)
  {
    cam.insert(c[i]);
  }
  return cam.size();
}
int main()
{
  int arr[]={2,12,5,3};
  int brr[]={1,1,2,4,7};
  int sizea = sizeof(arr)/sizeof(arr[0]);
  int sizeb = sizeof(brr)/sizeof(brr[0]);
  cout<<Unionarrays(arr,brr,sizea,sizeb);
}
