#include<iostream>
using namespace std;

void sort012(int a[], int n)
{
    int zero =0;
    int one = 0 ;
    int second = 0;
    for(int i =0 ;i < n ;i++)
    {
        if(a[i] == 0)
        {
            ++zero;
        }
        else if(a[i] == 1)
        {
            ++one;
        }
        else
        {
            ++second;
        }
    }
    int s = 0;
    if(zero > 0)
    {
        for(int i = 0 ;i < zero ;i++ )
        {
            a[i] = 0;
            s++;
        }
    }
    if(one > 0)
    {
        for(int i =s ;i < one+zero ;i++ )
        {
            a[i] = 1;
            s++;
        }
    }
    if(second > 0)
    {
        for(int i =s ;i < one+zero+second ;i++ )
        {
            a[i] = 2;
        }
    }

    for(int i =0 ;i < n ;i++)
    {
      cout<<a[i]<<" ";
    }
}

int main()
{
  int arr[] = {0,2,1,0,2,1};
  int size = sizeof(arr)/sizeof(arr[0]);
  sort012(arr,size);
}
