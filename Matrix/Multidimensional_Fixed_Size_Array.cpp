#include<iostream>
using namespace std;

int main()
{
  int a[][2] = {{2,5},
                {3,8},
                {4,5}};

  for(int i = 0 ; i < 3 ; i++)
  {
    for(int j = 0 ; j < 2; j++)
    {
      cout<<a[i][j]<<" ";
    }
    cout<<endl;
  }
}
