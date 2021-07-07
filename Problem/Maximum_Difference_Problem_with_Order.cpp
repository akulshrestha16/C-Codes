//Maximum_Difference_Problem_with_Order
#include<iostream>
using namespace std;

int maximunDiff(int a[],int n)
{
  int max = a[0];
  int min = a[0];
  int pos = 0;
  for(int i = 1 ; i < n ; i++)
  {
    if(a[i] > max)
    {
      max = a[i];
      ++pos;
    }
  }
  cout<<"max "<<max<<endl;
  for(int i = 1 ; i < pos ; i++ )
  {
    if(a[i] < a[i -1])
    {
      min = a[i];
    }
  }
  cout<<"min "<<min<<endl;
  return max-min;
}

int main()
{
  int arr[] = {6,4,3,1,2};
  int size = sizeof(arr)/sizeof(arr[0]);
  cout<<maximunDiff(arr,size);
}
