#include<iostream>
using namespace std;


int main()
{
  int arrodd[5]={1,2,3,4,5};
  int arreven[6]={22,11,9,6,4,3};
  int s=arrodd[0];
  int e=arrodd[4];
  int mid;
  int key=5;
  mid=(s+e)/2;
  while(mid!=key && e>s)
 { if(key>mid)
  {s=mid+1;}
  if(key<mid)
  {e=mid-1;}
  mid=(s+e)/2;
}  
if(key==mid)
{cout<<"found";}
if(key!=mid)
  {cout<<"not found";
}
return 0;
}