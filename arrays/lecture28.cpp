#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  //2d array dynamically created
  int **arr=new int *[n];
  for(int i=0;i<n;i++)
  {arr[i]=new int [n];
  }
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
        cin>>arr[i][j];

    }
  }
  cout<<endl;
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
        cout<<arr[i][j]<<" ";
        
    }
    cout<<endl;
  }

  //deleting the heap memory
  for(int i=0;i<n;i++)
  { //deleting column bc if remove row first then we lost the colums corresponding to rows
    delete []arr[i];
  } //deleting row
  delete []arr;
  cout<<endl<<"1d array"<<endl;
  //for id aray
  int *p=new int [n];
  for(int i=0;i<n;i++)
  cin>>p[i];
  for(int i=0;i<n;i++)
  cout<<p[i];
  

}