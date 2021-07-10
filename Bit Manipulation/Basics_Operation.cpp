/*
The & (bitwise AND) in C or C++ takes two numbers as operands and does AND on
every bit of two numbers. The result of AND is 1 only if both bits are 1.

The | (bitwise OR) in C or C++ takes two numbers as operands and does OR on
every bit of two numbers. The result of OR is 1 if any of the two bits is 1.

The ^ (bitwise XOR) in C or C++ takes two numbers as operands and does XOR on
every bit of two numbers. The result of XOR is 1 if the two bits are different.

The << (left shift) in C or C++ takes two numbers, left shifts the bits of the
first operand, the second operand decides the number of places to shift.

The >> (right shift) in C or C++ takes two numbers, right shifts the bits of the
first operand, the second operand decides the number of places to shift.

The ~ (bitwise NOT) in C or C++ takes one number and inverts all bits of it

The left shift and right shift operators should not be used for negative numbers.

If any of the operands is a negative number, it results in undefined behaviour.
For example results of both -1 << 1 and 1 << -1 is undefined. Also, if the number
is shifted more than the size of integer, the behaviour is undefined. For example,
1 << 33 is undefined if integers are stored using 32 bits. See this for more details.

The bitwise XOR operator is the most useful operator from technical interview perspective.
 
It is used in many problems. A simple example could be “Given a set of numbers where
all elements occur even number of times except one number, find the odd occurring number”
This problem can be efficiently solved by just doing XOR of all numbers.
*/
#include<iostream>
using namespace std;

int main()
{
  unsigned int a = 5; // 101
  unsigned int b = 2; // 010
  int c = a&b; // 0 0 0
  cout<<"Bitwise AND Operation of "<< a <<" and "<< b <<" = "<<c<<endl;
  c = a|b; // 1 1 1
  cout<<"Bitwise OR Operation of "<< a <<" and "<< b <<" = "<<c<<endl;
  c = a^b; // 1 1 1
  cout<<"Bitwise XOR Operation of "<< a <<" and "<< b <<" = "<<c<<endl;
  c = ~a; // 0 1 0
  cout<<"Bitwise COMPLEMENT Operation of "<< a <<" = "<<c<<endl;
  c = a>>1; // 0 1 0
  cout<<"Bitwise RIGHT SHIFT Operation of "<< a <<" = "<<c<<endl;
  c = b<<2; // 1 0 0 0
  cout<<"Bitwise LEFT SHIFT Operation of "<< b <<" = "<<c<<endl;
  return 0;
}
