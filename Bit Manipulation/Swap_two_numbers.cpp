#include<iostream>
using namespace std;

void swapValue(int p,int q)
{
  p = p^q;
  q = p^q;
  p = p^q;
  cout<<"a = "<<p<<" and "<<"b = "<<q<<endl;
}

int main()
{
  int a ,b ;
  cout<<"Enter the a value"<<endl;
  cin>>a;
  cout<<"Enter the b value"<<endl;
  cin>>b;
  cout<<"a = "<<a<<" and "<<"b = "<<b<<endl;
  swapValue(a,b);
}
