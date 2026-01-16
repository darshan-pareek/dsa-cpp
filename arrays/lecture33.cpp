#include<iostream>
using namespace std;
/*int a=0;
int fun(int n,int arr[])
{   
     if(n==0)
     return  0 ;

    a=a+arr[0];

    fun(n-1,arr+1);
        
   return a;


}
int main()
{
  int arr[6]={1,2,3,4,5,6};
  int n=6;
 int  ans=fun(n,arr);
  cout<<ans;

} */
// linear search

/*
bool lc(int arr[],int key,int n)
{
  if(n==0)
    return 0;
    if(arr[0]==key)
    return 1;
    bool ans=lc(arr+1,key,n-1);
    return ans ;

}
int main()
{

   int arr[6]={1,2,3,7,8,44};
   int key=11;
   int n=6;
   bool ans=lc(arr,key,n);
   if(ans)
   cout<<"found";
   else
   cout<<"not found";


}  */

bool bs(int arr[],int key,int s,int e)
{    
    if(s>e)
    return 0;
    int mid=s+(e-s)/2;
    if(arr[mid]==key)
    return 1;
    else
    {
       if(arr[mid]>key)
        return bs(arr,key,s,mid-1);
        if(arr[mid]<key)
        return bs(arr,key,mid+1,e);
    }
  // return 0;





}
int main()
{

   int arr[6]={1,2,3,7,8,44};
   int key=41;
   int n=6;
   int s=0;
   int e=n-1;
   bool ans=bs(arr,key,s,e);
   if(ans)
   cout<<"found";
   else
   cout<<"not found";


}