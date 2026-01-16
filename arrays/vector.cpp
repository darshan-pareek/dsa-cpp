#include<iostream>
#include<vector>
using namespace std;
int main()
{
  vector<int> v;
  cout<<"capacity is  "<<v.capacity()<<endl;
  v.push_back(1);
  cout<<"capacity is  "<<v.capacity()<<endl;
  v.push_back(2);
  cout<<"capacity is  "<<v.capacity()<<endl;
  v.push_back(3);
  cout<<"capacity is  "<<v.capacity()<<endl;
  cout<<v.size()<<endl;
  cout<<"element at 2nd "<<v.at(2)<<endl;
  cout<<v.front()<<endl;
  cout<<v.back()<<endl;
  for(int i=0;i<v.size();i++)
  {
   cout<<v[i]<<" ";

  }
  v.pop_back();
  cout<<endl;
  for(int i=0;i<v.size();i++)
  {
   cout<<v[i]<<" ";
\


  }
  cout<<endl;
  v.clear();
  cout<<v.capacity()<<"  "<<v.size()<<endl;
  vector<int> first(5,1);
  for(int i:first)
  cout<<i<<" ";


}