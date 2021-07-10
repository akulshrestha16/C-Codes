/*A Heap is a special Tree-based data structure in which the tree is a complete binary tree.
It follows the Heap Property –

Max-Heap: In a Max-Heap the key present at the root node must be greatest among
the keys present at all of it’s children. The same property must be recursively
true for all sub-trees in that Binary Tree.

Min-Heap: In a Min-Heap the key present at the root node must be minimum among
the keys present at all of it’s children. The same property must be recursively
true for all sub-trees in that Binary Tree.

A heap can be implemented in 2 ways –

Tree Node Implementation with pointers
Heap as Array Implementation
Applications –

Some Applications of Heap are :

Heapsort sorting algorithm
Graph algorithms like – Prim’s minimal-spanning-tree algorithm and Dijkstra’s
shortest-path algorithm.

A priority queue can be implemented with a heap or a variety of other methods.

Min Heap Implementation as Array (Full C++ Program) –                     */
#include<iostream>
#include <bits/stdc++.h>
#include<math.h>
using namespace std;

class MinHeap
{
public:
  int *hrr;
  int capacity;
  int heap_size;

  MinHeap(int cap)
  {
    heap_size = 0;
    capacity = cap;
    hrr = new int[cap];
  }

  int parent(int num)
  {
    return (num - 1)/2 ;
  }

  int left(int num)
  {
    return (2*num + 1);
  }

  int right(int num)
  {
    return (2*num + 2);
  }

  void Minheapify(int i)
  {
    int l = left(i);
    int r = right(i);
    int smallest = i;
    if(i < heap_size && hrr[l] < hrr[i])
    {
      smallest = l;
    }
    if(i < heap_size && hrr[r] < hrr[smallest])
    {
      smallest = r;
    }
    if(smallest != i)
    {
      swap(hrr[i],hrr[smallest]);
      Minheapify(smallest);
    }
  }

  void insertKey(int val)
  {
    if(heap_size == capacity)
    {
      cout<<"Overflow : Heap full"<<endl;
      return;
    }
    heap_size++;
    int i = heap_size - 1;
    hrr[i] = val;
    while(i != 0 && hrr[parent(i)] > hrr[i])
    {
      swap(hrr[i],hrr[parent(i)]);
      i = parent(i);
    }
  }

  int extractMin()
  {
    if(heap_size <= 0)
    {
      return INT_MAX;
    }
    if(heap_size == 1)
    {
      return hrr[0];
    }
    int root = hrr[0];
    hrr[0] = hrr[heap_size -1];
    heap_size--;
    Minheapify(0);
    return root;
  }

  void linearSearch(int val)
  {
    for(int i = 0 ; i < heap_size ; i++ )
    {
      if(hrr[i] == val)
      {
        cout<<"Number is Found"<<endl;
      }
    }
    cout<<"Number isn't Found"<<endl;
  }

  void printHeap()
  {
    for(int i = 0 ; i < heap_size ; i++ )
    {
      cout<<hrr[i]<<" ";
    }
    cout<<endl;
  }

  void decreaseKey(int pos , int int_min)
  {
    hrr[pos] = int_min;
    while(pos != 0 && hrr[parent(pos)] > hrr[pos])
    {
      swap(hrr[parent(pos)],hrr[pos]);
      pos = parent(pos);
    }
  }

  int getMin()
  {
    return hrr[0];
  }

  void deleteKey(int pos)
  {
    if(pos < 0  )
    {
      cout<<"Heap is Empty"<<endl;
    }
    else if(pos > heap_size)
    {
      cout<<"Please Enter the correct index"<<endl;
    }
    else
    {
      decreaseKey(pos - 1,INT_MIN);
      extractMin();
    }
  }

  int height() {
    return ceil(log2(heap_size + 1)) - 1;
  }
};

int main()
{
  int n;
  cout<<"Enter the Array Size"<<endl;
  cin>>n;
  MinHeap obj(n);
  cout<<"Min Heap id created"<<endl;
  int option,val;
  do{
    cout << "What operation do you want to perform? " <<
      " Select Option number. Enter 0 to exit." << endl;
    cout << "1. Insert Key/Node" << endl;
    cout << "2. Search Key/Node" << endl;
    cout << "3. Delete Key/Node" << endl;
    cout << "4. Get Min" << endl;
    cout << "5. Extract Min" << endl;
    cout << "6. Height of Heap" << endl;
    cout << "7. Print/Traversal Heap values" << endl;
    cout << "8. Clear Screen" << endl;
    cout << "0. Exit Program" << endl;
    cin>>option;
    switch (option) {
      case 0:
        break;
        case 1:
          cout << "INSERT Operation -" << endl;
          cout << "Enter VALUE to INSERT in HEAP: ";
          cin >> val;
          obj.insertKey(val);
          cout << endl;
          break;
        case 2:
          cout << "SEARCH Operation -" << endl;
          cout << "Enter VALUE to SEARCH in HEAP: ";
          cin >> val;
          obj.linearSearch(val);
          break;
        case 3:
          cout << "DELETE Operation -" << endl;
          cout << "Enter INDEX of Heap Array to DELETE: ";
          cin >> val;
          obj.deleteKey(val);
          cout<<"DELETED SUCCESSFULLY"<<endl;
          break;
        case 4:
          cout << "GET Min value : " << obj.getMin();
          cout << endl;
          break;
        case 5:
          int minVal ;
          minVal = obj.extractMin();
          if(minVal == INT_MAX)
          {
            cout<<"Heap is Empty"<<endl;
          }
          else
          {
            cout << "EXTRACT Min value : " << minVal;
          }
          cout << endl;
          break;
        case 6:
          cout << "HEAP TREE HEIGHT : " << obj.height() << endl;
          break;
        case 7:
          cout << "PRINT Heap Array : " << endl;
          obj.printHeap();
          cout << endl;
          break;
        case 8:
            system("cls");
          break;
          default:
          cout << "Enter Proper Option number " << endl;
      }
  }while(option != 0);
  return 0;
}
