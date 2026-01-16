#include<iostream>
#include<cmath>
using namespace std;

int pivot(int arr[],int size)
{
   int s=0;
   int e=size-1;
   while(e>s)
   {
    int mid=s + (e-s)/2;
    if(arr[s]<arr[mid])
    s=mid+1;
    else
    e=mid;
   }
   return arr[s-1];
}

int main()
{
    for(int i=0;i<5;i++)
    {
           for(int j=1;j<=5-i;j++)
           cout<<j;
            for(int j=0;j<2*i;j++)
           cout<<"*";
           for(int j=5-i;j>0;j--)
           cout<<j;
        
           cout<<endl;        
    }
    cout<<endl;
    
    int binary=101;
    int decimal=0;
    int i=0;
    while(binary>0)
    {
        int last=binary%10;
        decimal=decimal + pow(2,i++) * last;
        binary=binary/10;
    }
    cout<<decimal<<endl;


    int dc=5;
    int bn=0;
    int i1=0;
    while(dc!=0)
    {
        int bit=dc &1;
        bn=bit * pow(10,i1++) + bn;
        dc=dc>>1;
    }
    cout<<dc<<endl;

    int arr[]={8,9,1,2,3,4};
    cout<<pivot(arr,6);

}