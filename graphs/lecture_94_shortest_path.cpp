//shortest path in directed acyclic graph
#include<unordered_map>
#include<list>
#include<iostream>
#include<stack>
#include<vector>
#include<limits.h>
using namespace std;
class Graph
{
   public:
   unordered_map<int,list<pair<int,int>>> adj;
   // take two vertexs and weight between them
   void addEdge(int u,int v, int w)
   {
    adj[u].push_back(make_pair(v,w));

   }

   void print()
   {
      for(auto i: adj)
      {
          cout<<i.first<<"->";
         for(auto j:i.second)
         {
            cout<<"("<<j.first<<","<<j.second<<")";

         }
         cout<<endl;


      }

   }
   void dfs(int node,stack<int>&s,unordered_map<int ,bool> &visited)
{
    visited[node]=true;
    for(auto i: adj[node])
    {
        if(!visited[i.first])
        {
            dfs(i.first,s,visited);
        }
    }
    s.push(node);
}


void getShortestPath(int source, vector<int> &dist,stack<int>&s)
{
   dist[source]=0;
   while(!s.empty())
   {
    int top=s.top();
    s.pop();

    if(dist[top]!=INT_MAX)
    {
        for(auto i:adj[top])
        {
            if(dist[top]+i.second<dist[i.first])
            {
                dist[i.first]=dist[top]+i.second;
            }
        }
    }

   }
    
}

};


int main()
{
   Graph g;
   int v,e;
   cout<<"enter the no of nodes"<<endl;
   cin>>v;
   cout<<"enter the no of edge"<<endl;
   cin>>e;
   for(int i=0;i<e;i++)
   {
     int u,v,w;
     cin>>u>>v>>w;
     g.addEdge(u,v,w);


   }
   g.print();
   
   // topological sort
     unordered_map<int ,bool> visited;
     stack<int> s;
  
   for(int i=0;i<v;i++)
   {
          if(!visited[i])
          {
            g.dfs(i,s,visited);
          }
   }

   //the topologicall sort is in the stack
 /*  while(!s.empty())
   {
    cout<<s.top();
    s.pop();
   } */

   // now find the shortest path form the source node
   vector<int> dist(v);
   int souce=1;
   for(int i=0;i<v;i++)
   {
    dist[i]=INT_MAX;
   }

   g.getShortestPath(souce,dist,s);
   for(int i=0;i<dist.size();i++)
     {   if(dist[i]==INT_MAX)
          cout<<"infinity";
        else
          cout<<dist[i]<<" ";
     
    }

}