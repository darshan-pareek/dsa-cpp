#include<iostream>
#include<queue>
using namespace std;
int main()
{
priority_queue<int> p;
priority_queue<int , vector<int>,greater<int>> q;
p.push(1);
p.push(5);
p.push(8);
p.push(16);
int n=p.size();
for(int i=0;i<n;i++)
{
    cout<<p.top()<<" ";
    p.pop();
}
cout<<endl;
q.push(1);
q.push(5);
q.push(8);
q.push(16);
int m=q.size();
for(int i=0;i<m;i++)
{
    cout<<q.top()<<" ";
    q.pop();
}

cout<<p.empty();



}