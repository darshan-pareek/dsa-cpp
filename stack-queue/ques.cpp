#include<iostream>
using namespace std;
#include<stack>

int main()
{
    int i=0;
    string s="[({})]";
    stack <char> st;
    while(i<s.size())
    {    if(s[i]=='[' || s[i]=='(' || s[i]=='{')
          {
            st.push(s[i]);
          }  
       // cout<<s[i]<<endl;
       else
       {
        st.pop();
       }
        i++;
    }
     if(st.empty())
        cout<<"stack is empty";
    else
    cout<<"stack is not empty";

    stack<int >s1;
    stack<int>s2;
    s1.push(3);
    s1.push(5);
    s2.push(s1.top());


       

}