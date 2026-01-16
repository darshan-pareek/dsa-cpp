#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{

    string s= "heelloo";
    vector<int> arr(26,0);
   for(char c :s)
   {
    arr[c-'a']++;
    
   }
   for(int i=0;i<26;i++)
   {
    if(arr[s[i]-'a']==1)
    cout<<s[i];
   }

}