#include <bits/stdc++.h> 
using namespace std;
bool isvalid(string str)
{
    stack<char> st;
    for(int i=0;i<str.length();i++)
    {
      if (str[i] == '{') {
        st.push(str[i]);
      }
       else {
        st.pop();
      }
    }
        if(st.empty())
        {
          return 1;
        }
         else {
          return 0;
        }
}

int makevalid(string str)
{
   int count=0;
   stack<char> st1;
   for(int i=0;i<str.length();i++)
   {
          if (str[i] == '{' && st1.empty()) {
        st1.push(str[i]);
       }
       else if (str[i]=='}' && st1.top()=='{')
       {
         st1.pop();
       } 
       else {
         str[i] = '}';
         st1.pop();
         count++;
       }
          }
          return count;


}
int findMinimumCost(string str) {
  // Write your code here
    if (str.length() % 2 != 0) 
       {return -1;
     }
    else if(isvalid(str))
     {
       return 0;
     }
    else
    {
    return  makevalid(str);
    }

      
}
int main()
{
    string str="{{{}}}";
    findMinimumCost(str);
}