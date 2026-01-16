/*
#include<iostream>
using namespace std;
//#include<stack>

class Stack
{ public:
  //properties
    int top ;
    int * arr;
    int size;

  // behaviours
  Stack (int size)
  {
    this->size=size;
    arr = new int [size];
    top=-1;

  }

  void push(int element)
  {
    if(top<size-1)
    {top++;
    arr[top]=element;
    }
    else
    {

        cout<<"stack is overflow"<<endl;
    }

  }
  void pop()
  {
     if(top>-1)
     {
    cout<<arr[top]<<endl;
    top--;
     }
     else
     {
        cout<<"stack is underflow"<<endl;
     }

  }

  void peak()
  {  if(top>-1 && top < size-1)
    cout<<arr[top]<<endl;

  }

  void travese()
  {
    int  a=top;
    while (a>-1)
    {
        cout<<arr[a]<<" ";
        a--;
    }
  }

  bool isempty()
  {

    if (top==-1)
    {
      return 1;

    }
    else
    return 0;
  }




};
int main()
{

    Stack obj(5);
    obj.push(2);
        obj.push(6);
        obj.push(21);
        obj.push(26);
        obj.push(56);
           obj.push(58);
        obj.travese();
        obj.pop();
           obj.pop();
              obj.pop();
              obj.peak();

                        
  /*  
 stack<int> s;
 s.push(2);
  s.push(5);
   s.push(7);
    s.push(9);
  cout<<  s.top();
 if(s.empty())
 {
    cout<<"stacck is empty"<<endl;
 }
 else
 {
    cout<<"stack is not empty";
 }
// }
 */



//stack using  link list

#include<iostream>
using namespace std;

class Node
{ 
  public:
   int data;
   int next;
   Node (int data)
   {
    this->data=data;
    this->next=NULL;
   }
  
};


