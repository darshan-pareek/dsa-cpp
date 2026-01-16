#include<iostream>
#include<array>
#include<vector>
using namespace std;
int main()
{
  array<int ,4> a ={1,2,3,4};
  int size=a.size();
  cout<<size<<endl;
  cout<<"element at 2nd index"<<a.at(2)<<endl;
  cout<<"empty or not"<<a.empty()<<endl;
  cout<<"front element"<<a.front();
  cout<<"last element"<<a.back();

  cout<<endl;
   vector<vector<int>> k={{1,2,3,},{4,5,6}};
      cout<<endl;
      cout<<k[1][1];
  return 0;

}