/*#include<iostream>
#include<list>
#include<unordered_map>
using namespace std;

class graph
{
    public:
    unordered_map<int,list<int>> adj;
    void addEdge(int u,int v, bool direction)
    {
    //if direction is 1 then it is adirected graph
    // if direction is 0 then it is undirected graph

    //creating a edge from u to v
    adj[u].push_back(v);
    if(direction==0)
    {
      adj[v].push_back(u);
    }
}
  void printlist()
  {
    for (auto i : adj)
    {
        cout<<i.first<<"->"<<" ";
        for(auto j: i.second)
        {
            cout<<j<<",";
        }
        cout<<endl;

    } 

}

};

int main()
{
    int n,m;
    cout<<"enter the no of nodes"<<endl;
    cin>>n;
    cout<<"enter the no of edges"<<endl;
    cin>>m;

    graph g;
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        g.addEdge(u,v,0);
    }
      g.printlist();
      return 0;

}
*/


// generic graph ie any type of data
#include<iostream>
#include<list>
#include<unordered_map>
using namespace std;
template<typename T>

class graph
{
    public:
    unordered_map<T,list<T>> adj;
    void addEdge(T u,T v, bool direction)
    {
    //if direction is 1 then it is adirected graph
    // if direction is 0 then it is undirected graph

    //creating a edge from u to v
    adj[u].push_back(v);
    if(direction==0)
    {
      adj[v].push_back(u);
    }
}
  void printlist()
  {
    for (auto i : adj)
    {
        cout<<i.first<<"->"<<" ";
        for(auto j: i.second)
        {
            cout<<j<<",";
        }
        cout<<endl;

    } 

}

};

int main()
{
    int n,m;
    cout<<"enter the no of nodes"<<endl;
    cin>>n;
    cout<<"enter the no of edges"<<endl;
    cin>>m;

    graph<int> g;
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        g.addEdge(u,v,0);
    }
      g.printlist();
      return 0;

}
