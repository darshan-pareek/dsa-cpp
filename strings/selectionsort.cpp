#include<iostream>
using namespace std;


int main()
{
  int arr[]={45,34,23,12,9};
  int a,b,c;
  for(int i =0;i<5;i++)
  {
    for(int j=i;j<5;j++)
    {
      if(arr[i]>arr[j])
      { 
        a=arr[i];
        arr[i]=arr[j];
        arr[j]=a;

      }

    }
  }
  for(int i=0;i<5;i++)
  cout<<arr[i]<<endl;
  return 0;

}