#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int b=15;
    int c=14;
    int d=25;
  

    if(a>b && a>c && a>d)
    cout<<a;
    if(b>a && b>c && b>d)
    cout<<b;
    if(c>b && c>a && c>d)
    cout<<c;
    if(d>b && d>c && d>a)
    cout<<d;

    cout<<"enter two number"<<endl;
    int k,l,m;

    cin>>k>>l;
    cout<<"press"<<endl;
    
  while(1)
  {cout<<"1. for addition  2. for sub  3. for mul  4. for div  5. for exit"<<endl;
    cin>>m;
    switch (m)
    {
    case 1:
        cout<<k+1<<endl;
        break;
    case 2:
        cout<<k-1<<endl;
        break;
    case 3:
        cout<<k*1<<endl;
        break;
    case 4:
        cout<<k/1<<endl;
        break;
    
    default:
        exit(0) ;
    }
  }

   
 
}