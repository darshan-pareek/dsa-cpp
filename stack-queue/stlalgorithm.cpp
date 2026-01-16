#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector<int > v;
    v.push_back(2);
    v.push_back(8);
    v.push_back(10);
    v.push_back(13);
    v.push_back(16);
    v.push_back(23);
    cout<<binary_search(v.begin(),v.end(),10);
    cout<<lower_bound(v.begin(),v.end(),4)-v.begin();
    int a=5;
    int b=10;
    cout<<endl<<"max is  "<<max(a,b)<<endl;
    cout<<"min is "<<min(a,b);
    swap(a,b);
    cout<<"a is "<<a<<"b is  "<<b<<endl;

    string k ="darshan";
    reverse(k.begin(),k.end());
    cout<<k<<endl;
    rotate(v.begin(),v.begin()+2,v.end());
    for(auto i:v)
    {
        cout<<i<<" ";
    }
 cout<<endl;

    sort(v.begin(),v.end());
    for(auto i:v)
    {
        cout<<i<<" ";
    }
}
