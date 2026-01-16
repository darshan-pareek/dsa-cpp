#include <bits/stdc++.h> 
#include<vector>
using namespace std;

bool issafe(int xnew,int ynew, vector<vector <bool>> &visited,vector < vector < int >> & arr,int n)
{   
    if( (xnew>=0 && xnew <n) && (ynew>=0 && ynew<n) &&
        arr[xnew][ynew]==1 && visited[xnew][ynew]!=1  )
       return true;

    else
    return false;
}


void solve(int x,int y,vector < string >&ans, vector<vector <bool>> &visited,
string path,vector < vector < int >> & arr,int n)
{
  //base case 
   // cout<<x<<" "<<y<<endl;
    if(x==n-1 && y==n-1)
    {   
        ans.push_back(path);
        return ;
    }
    // 4 movement LRUD
    //down
    if(issafe(x+1,y,visited,arr,n))
    {
        visited[x][y]=1;
        solve(x+1,y,ans,visited,path +'D',arr,n);
        visited[x][y]=0;

    }
    
      //left
        if(issafe(x,y-1,visited,arr,n))
    {
        visited[x][y]=1;
        solve(x,y-1,ans,visited,path +'L',arr,n);
        visited[x][y]=0;

    }

    //right
      if(issafe(x,y+1,visited,arr,n))
    {  
       visited[x][y]=1;
        solve(x,y+1,ans,visited,path+'R',arr,n);
        visited[x][y]=0;

    }
    //up

      if(issafe(x-1,y,visited,arr,n))
    {
        visited[x][y]=1;
        solve(x-1,y,ans,visited,path+'U',arr,n);
        visited[x][y]=0;

    }



}


vector < string > searchMaze(vector < vector < int >> & arr, int n) {
    // Write your code here.
    vector < string > ans;
    vector<vector <bool>> visited (n,vector<bool> (n,0));
    string path=""; 
  
    if(arr[0][0]==0)
    return ans;
    solve(0,0,ans,visited,path,arr,n);
    return ans;
}

int main()
{
    vector<vector<int>> arr = {
        {1, 0, 0, 0},
        {1, 1, 0, 0},
        {1, 1, 0, 1},
        {0, 1, 1, 1}
    };
    int n = arr.size();
    vector<string> result = searchMaze(arr, n);
    
    for (const string &path : result) {
        cout << path << endl;
    }

    return 0;
}