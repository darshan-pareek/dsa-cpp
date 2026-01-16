#include <iostream>
using namespace std;
int firstO(int arr[],int size,int key)
{
    int s=0;
    int e=size-1;
    int ans=-1;
    int mid= s+(e-s)/2;
    while(s<=e)
    {
        if(key==arr[mid])
        { ans =mid;
            e=mid-1;
        }
        if(key>arr[mid])
        {
            s=mid+1;
            
        }
        if(key<arr[mid])
        {e=mid-1;}
    
        mid=s+(e-s)/2;
    }
    return ans;
}
  
int lastO(int arr[],int size,int key)
{
    int s=0;
    int e=size-1;
    int ans =-1;
    int mid= s+(e-s)/2;
    while(s<=e)
    {
        if(key==arr[mid])
        { ans =mid;
            s=mid+1;
        }
        if(key>arr[mid])
        {
            s=mid+1;
            
        }
        if(key<arr[mid])
        {e=mid-1;}
    
        mid=s+(e-s)/2;
    }
    return ans;
}
int main() {
    int arr[6]={1,2,3,4,4,5};
    int key = 4;
    cout<<"first index of 4  " <<  firstO(arr,6,4)<<endl;
    cout<<"last index of 4  " <<  lastO(arr,6,4)<<endl;
    // Write C++ code here
    

    return 0;
}