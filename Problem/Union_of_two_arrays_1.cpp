#include<iostream>
using namespace std;

bool search(int r[],int val,int end)
{
  for(int i =0 ; i < end ; i++)
  {
    if(r[i]==val)
    {
      return false;
    }
  }
  return true;
}

int Unionarrays(int a[], int b[],int n , int m)
{
 int c[n+m];
 int p = 0;
 for(int i = 0 ; i< n ; i++)
 {
   if(search(c,a[i],p))
   {
     c[p] = a[i];
     p++;
   }
 }
 for(int i = 0 ; i< m ; i++)
 {
   if(search(c,b[i],p))
   {
     c[p] = b[i];
     p++;
   }
 }
 return p;
}

int main()
{
  int arr[]={2,12,5,3};
  int brr[]={1,1,2,4,7};
  int sizea = sizeof(arr)/sizeof(arr[0]);
  int sizeb = sizeof(brr)/sizeof(brr[0]);
  cout<<Unionarrays(arr,brr,sizea,sizeb);
}
