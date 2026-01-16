#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool ispossibile(vector<int>&arr,int k,int mid)
{
   
    int pagesum=0;
    int studentcnt=1;
    for(int i=0;i<arr.size();i++)
    {
        if(pagesum +arr[i]<=mid)
        pagesum+=arr[i];
        
        else
        {
            studentcnt++;
            if(studentcnt>k || arr[i]>mid)
            return false;
            pagesum=0;
            pagesum +=arr[i];
        }
    }
    
    return true;
}


int findPages(vector<int> &arr, int k) {
  // code here
  int s=0;
  int e= 0;
  int ans=-1;
  if (k > arr.size()) return -1;
  for(int i=0;i<arr.size();i++)
  e=e+arr[i];
  
  while(s<=e)
  {
      int mid= s+(e-s)/2;
       if(ispossibile(arr,k,mid))
       {
           ans=mid;
           e=mid-1;
       }
       else
       {
           s=mid+1;
       }
      
  }
  return ans;
}
int main ()
{
    vector<int > arr= {22,23,67};
     int k=1;
     cout<<findPages(arr,k);


}