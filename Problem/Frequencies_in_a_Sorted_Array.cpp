#include<iostream>
using namespace std;

void Frequencies(int a[],int n)
{
  int count =1;
  int temp = a[0];
  for(int i =1 ;i < n ; i++)
  {
    if(a[i] == a[i-1])
    {
      count++;
    }
    else
    {
      cout<<a[i-1]<<" "<<count<<endl;
      temp = a[i];
      count =1;
    }
  }
  cout<<a[n-1]<<" "<<count<<endl;
}

int main()
{
  int arr[] = {6,6,6};
  int size = sizeof(arr)/sizeof(arr[0]);
  Frequencies(arr,size);
}
