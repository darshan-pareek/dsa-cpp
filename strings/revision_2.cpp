#include<iostream>
#include<vector>
using namespace std;

int twopowern(int n)
{
    if(n==0)
    return 1;

    return 2 * twopowern(n-1);
}

int factorial(int n)
{
    if(n==0)
    return 1;

    return n * factorial(n-1);
}
int fibonaaci(int n)
{
    if(n<=1)
    return n;
    return fibonaaci(n-1)+ fibonaaci(n-2);
}
void merge(vector<int>& arr,int s,int mid,int e)
{
   vector<int> temp;
   int left=s;
   int right=mid+1;
   while(left<=mid && right<=e)
   {
    if(arr[left]<=arr[right]){
    temp.push_back(arr[left]);
     left++;    
}
else
{
    temp.push_back(arr[right]);
    right++;
}
   }

   while(left<=mid)
   {
        temp.push_back(arr[left]);
         left++;    
   }
   while(right<=e)
   {
    temp.push_back(arr[right]);
    right++;
   }

   for(int i=s;i<=e;i++)
   arr[i]=temp[i-s];

}

void ms(vector<int> &arr, int s,int e)
{
    if(s>=e) return ;

    int mid=(s+e)/2;
    ms(arr,s,mid);
    ms(arr,mid+1,e);
    merge(arr,s,mid,e);
}
int main()
{
    int n=5;

    cout<<twopowern(n)<<endl;

    cout<<factorial(n)<<endl;

    cout<<fibonaaci(n)<<endl;

    int a=-5;
    cout<<a<<" "<< abs(a)<<endl;
    int b=n & 1;
    cout<<b<<endl;

    vector<int> arr ={38,27,43,3,9,82,10};
    ms(arr,0,arr.size()-1);

    for(int i=0;i<arr.size();i++)
    cout<<arr[i]<<" ";
    return 0;
    


}