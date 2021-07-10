/*
Given two numbers ‘a’ and b’. Write a program to count number of bits needed to
be flipped to convert ‘a’ to ‘b’.

key : n & n-1 remove last set bit.

10-1010
8- 1000
0010 = 2
0001 = 1
AND
0000
*/
#include<iostream>
using namespace std;

void flipBits(int a,int b)
{
  unsigned int xr = a^b;
  int count = 0;
  while(xr > 0)
  {
    count++;
    xr &= (xr -1);
  }
  cout<<"Total Numbers of Flips "<<count<<endl;
}

int main()
{
  int a ,b ;
  cout<<"Enter the a value"<<endl;
  cin>>a;
  cout<<"Enter the b value"<<endl;
  cin>>b;
  flipBits(a,b);
}
