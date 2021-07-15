#include<iostream>
#include<vector>
using namespace std;

int main()
{
  int m = 3, n = 2;
  vector<int> arr[m];

  for(int i = 0 ; i < m; i++)
  {
    for(int j = 0 ; j < n; j++)
    {
      arr[i].push_back(10*i+j);
    }
  }

  for(int i = 0 ; i < 2; i++)
  {
    for(int j = 0 ; j < 2; j++)
    {
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
}
