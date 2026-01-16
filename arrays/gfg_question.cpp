#include<iostream>
#include <climits>
using namespace std;

int main()
{     string s="-23572704173013437595739059720574gfg445";
       long long sum=0;
        int a=1;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]>64)
            break;
            
            if(s[i]==45)
            a=-1;
            else if (s[i]==32);
              
            else
          {    if(sum>INT_MAX)
              break;
             sum=sum*10+s[i]-48;
    
            
            
        }
        }
        if(sum*a>INT_MAX)
        cout<<INT_MAX;
        else if(sum*a<INT_MIN)
        cout<<INT_MIN;
       else
        cout<<sum*a;
   
}