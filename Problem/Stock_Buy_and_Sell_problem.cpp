#include<iostream>
using namespace std;

int BuySell(int price[], int n)
{
  int profit= 0;
  for(int i = 1 ; i < n ; i++)
  {
    if(price[i] > price[i -1])
    {
      profit += (price[i] - price[i -1]);
    }
  }
  return profit;
}
int main()
{
  int arr[] = {3,5,9};
  int size = sizeof(arr)/sizeof(arr[0]);
  cout<<"Maximun Profit "<<BuySell(arr,size);
}
