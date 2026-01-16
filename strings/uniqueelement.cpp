#include<iostream>
using namespace std;
int findUnique(int *arr, int size)
{
  int ans=0;
 
    //Warite your code here
   for(int i=0;i<size;i++)
   {
     ans=ans^arr[i];
   }
   return ans;
}
int main()
{ int size;
   cin>>size;
    int num[15];
  for(int i=0;i<size;i++)
{
    cin>>num[i];
}
int answer=findUnique(num , size);
cout<<answer;

}