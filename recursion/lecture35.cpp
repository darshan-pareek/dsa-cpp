#include<iostream>
using namespace std;

void merge(int arr[],int s,int e)
{
  int mid=s+(e-s)/2;
  int len1=mid-s+1;
  int len2=e-mid;
  int *first=new int [len1];
  int *second=new int [len2];
  //copy values
  int k=s;
  for(int i=0;i<len1;i++)
  first[i]=arr[k++];
   for(int i=0;i<len2;i++)
  second[i]=arr[k++];
  //merge 2 sorted array
  int index1=0;
  int index2=0;
  k=s;
  while(index1<len1 && index2<len2)
  {
    if(first[index1]<second[index2])
    {
      arr[k++]=first[index1++];
    }
    else{
      arr[k++]=second[index2++];
    }

  }
  while(index1<len1)
  {
    arr[k++]=first[index1++];
  }
  while(index2<len2)
  {
    arr[k++]=second[index2++];
  }
  delete []first;
  delete []second;

}
void mergesort(int arr[],int s,int e)
{
    //base case
    if(s>=e)
    return ;
    int mid= s+(e-s)/2;
    //left port sort
   //cout<<mid<<"  ";
    mergesort(arr,s,mid);
    //right part sort
    //mergesort(arr,mid+1,e);
   //cout<<endl<<mid<<" ";
    //merg
   // cout<<mid<<" ";
    merge(arr,s,e);
}
int main()
{
 int arr[6]={1,6,2,8,3,7};
 int n=6;
mergesort(arr,0,n-1);
//  for(int i=0;i<n;i++)
//   cout<<arr[i]<<"  ";
return 0;

}