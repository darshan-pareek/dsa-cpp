#include<iostream>
using namespace std;
int sum(int arr[][3],int row,int col)
{           int q=0;
             int r=0;
         for(int i=0;i<3;i++)
 {   int p=0;
  for(int j=0;j<3;j++)
  {
     p=p+arr[i][j];
  }
     if(p>q)
     {
      q=p;
      r++;
     }
 }
    cout<<"largest row is  "<<r<<" the value of row is "<< q;
}
int main()
{
 int arr[3][3];
 for(int i=0;i<3;i++)
 {
  for(int j=0;j<3;j++)
  {
    cin>>arr[i][j];
  }
 }
 for(int i=0;i<3;i++)
 {
  for(int j=0;j<3;j++)
  {
    cout<<arr[i][j];
  }
  cout<<endl;
 }
 sum(arr,3,3);
 return 0;
}