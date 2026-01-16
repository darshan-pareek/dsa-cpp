#include<iostream>
using namespace std;
int partition(int arr[],int s,int e)
{ int count=0;
  int pivot=arr[s];
  for(int i=s+1;i<=e;i++)
  {
    if(pivot>arr[i])
    count++;
  }
  //place of right place of pavot

  int pivotindex=s+count;
  swap(arr[pivotindex],arr[s]);
  //left and right wala part dekhna hai bs
  int i=s,j=e;
  while(i<pivotindex && j>pivotindex)
  {
     while(arr[i]<pivot)
     {
        i++;
     }
     while(arr[j]>pivot)
     {
        j--;
     }
     if(i<pivotindex && j>pivotindex)
     {
        swap(arr[i++],arr[j--]);
     }


  }
  return pivotindex;

}
void quicksort(int arr[],int s,int e)
{
   //base case
   if(s>=e)
   return ;
   int p = partition(arr,s,e);
   quicksort(arr,s,p-1);
  quicksort(arr,p+1,e); 

}
int main()
{
   int arr[8]={6, 6, -6, -2, -4, -6, 2, -6 };
   int n=8;
   quicksort(arr,0,n-1);
   for(int i=0;i<n;i++)
   cout<<arr[i]<<" ";



}