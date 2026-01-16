#include<iostream>
using namespace std;
int main()
{
int  count;
int l=0;
for(int i=5;i>0;i--)
{ int count=1;
 for(int j=i;j>0;j--)
{
  
 cout<<count;
 count++;
}
for(int k=l;k>0;k--)
{
 cout<<"*";
}
l=l+2;
count=i;
for(int p=i;p>0;p--)
{ 
  cout<<count;
  count--;


}
cout<<endl;
}

return 0;

}