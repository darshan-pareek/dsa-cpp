#include<iostream>
using namespace std;
#include<queue>
  void reversequeue(queue<int> &q)
    {
        if(q.empty())
        {
            return ;
        }
        int a = q.front();
        q.pop();
        reversequeue(q);
        q.push(a);
        
        
    }

int main()
{  
  queue<int> q;
  q.push(10);
  q.push(15);
  q.push(20);
  cout<<q.front()<<endl;
  q.pop();
  q.push(25);
   cout<<q.front()<<endl;

  reversequeue(q);
  cout<<q.front();

}