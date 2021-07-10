#include<iostream>
using namespace std;

void evenOdd(int n)
{
  if(n&1 == 0)
  {
    cout<<"Number is Even"<<endl;
  }
  else
  {
    cout<<"Number is Old"<<endl;
  }
}

int main()
{
  int a;
  cout<<"Enter the number "<<endl;
  cin>>a;
  evenOdd(a);
  return 0;
}
