#include<iostream>
using namespace std;

int ascending(int arr[],int n)
{   
   int count=0;
  for(int i=1;i<n;i++)
  {
    for(int j=0;j<n-i;j++)
    {
       if(arr[j]>arr[j+1])
       {
         count++;
         swap(arr[j],arr[j+1]);
       }
    }
  }
     return count;
}
int decending(int arr1[],int n)
{
   int count=0;
  for(int i=0;i<n-1;i++)
  {
    for(int j=0;j<n-i-1;j++)
    {
       if(arr1[j]<arr1[j+1])
       {
         count++;
         swap(arr1[j],arr1[j+1]);
       }
    }  
  }
     return count;
}
int min(int insort,int decsort)
{
  if(insort>decsort)
    return decsort;
  else
    return insort;
}

int main()
{
  int n;
  cin>>n;
  int arr[n];
  int arr1[n];
  bool isAcSorted = true;
  bool isDecSorted = true;
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
    arr1[i]=arr[i];
  } 
  for(int i=0;i<n-1;i++){
  if(arr[i]>arr[i+1]){
    isAcSorted = false;
  }
  }
  for(int i=0;i<n-1;i++){
  if(arr[i]<arr[i+1]){
    isDecSorted = false;
  }
  }
  int result;
     if(isAcSorted || isDecSorted){
       result=0;
     }
     else{
  result=min(ascending(arr,n),decending(arr1,n));
     }
  cout<<result;
  return 0;
}