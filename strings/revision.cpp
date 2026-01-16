#include<iostream>
#include<climits>
using namespace std;
int  bs(int arr[],int n, int key)
{
 int s=0;
 int e= n-1;
 int mid=s+(e-s)/2;
 while(s<=e)
 {
   if(arr[mid]==key)
   return mid;
   if(arr[mid]>key)
   e=mid-1;
   if(arr[mid]<key)
   s=mid+1;
   mid=s+e/2;

 
 }
 return -1;

}

int main()
{ 
  int sizel;
  cin>>sizel;
  int arr[sizel]; 
  for (int i=0;i<sizel;i++)
  cin>>arr[i];
   int key =69;
  int c= bs(arr,sizel,key);
  { cout<<c;}
 // for (int i=0;i<sizel;i++)
  //cout<<arr[i];

  
  }