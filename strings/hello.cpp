#include<iostream>
using namespace std;
class Solution {
public:
    int x,y,r,p;
    void scan(){
    cin>>x;}
    void result()
    {
     x=y;
     r=0;
     for(int i=0 ;i<3;i++)
     {
       p=x%10;
      r = r*10 + p;

     }
       cout<<x;
       cout<<r;
       if(r==y)
       {cout<<true;}
       else
       { cout<<false; }
    }

        
    
};
int main()
{
 Solution obj;
 obj.scan();
 obj.result();
return 0;
}

