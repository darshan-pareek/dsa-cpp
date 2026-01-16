#include<iostream>
using namespace std;
void fun(int a,string arr[])
{
    if(a==0)
    return ;
    int b=a%10;
    a=a/10;
      //cout<<arr[b];
     fun (a,arr);
    cout<<arr[b]<<"  ";
    

}
int main()
{
  string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
  int a;
  cin>>a;
  fun(a,arr);
  




}