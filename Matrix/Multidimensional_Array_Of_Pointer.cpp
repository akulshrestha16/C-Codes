#include<iostream>
using namespace std;

int main()
{
  int m = 3;
  int n = 2;
  int *arr[m];
  for(int i = 0 ; i < m ; i++)
  {
    arr[i] = new int[n];
  }

  for(int i = 0 ; i < 2; i++)
  {
    for(int j = 0 ; j < 2; j++)
    {
      arr[i][j] = 10;
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
}
