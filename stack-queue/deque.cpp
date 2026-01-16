#include<iostream>
#include<deque>
using namespace std;
int main()
{
  deque<int> d;
  d.push_back(1);
  d.push_front(5);

  d.push_front(6);
d.push_front(9);

   for(int i :d)
   cout<<i<<" ";
   cout<<endl;
   d.pop_front();
   d.pop_back();
   cout<<"element at 2nd inndex"<<d.at(0)<<endl;

   cout<<"empty or not"<<d.empty()<<endl;
   d.erase(d.begin(),d.begin()+1);
   
  for(int i :d)
   cout<<i<<" ";
return 0;

}
