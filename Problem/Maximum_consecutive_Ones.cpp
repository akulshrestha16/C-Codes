#include<iostream>
using namespace std;

int consecutiveOnes(int a[], int n)
{
  int count = 0;
  int maxOnes = 0;
  for(int i = 0 ; i < n ; i++)
  {
    if(a[i] == 0)
    {
      count = 0;
    }
    else
    {
      count++;
    }
    if(count > maxOnes)
    {
      maxOnes = count;
    }
  }
  return count;
}
int main()
{
  int arr[] = {1,0,1,1,0,0,1,1,1,1};
  int size = sizeof(arr)/sizeof(arr[0]);
  cout<<"Maximun consecutive Ones "<<consecutiveOnes(arr,size);
}
