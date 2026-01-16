#include<iostream>
using namespace std;
/* int fact(int n)
 {   if(n==0)
 {
    return 1;
 } 
    //  int small=fact(n-1);
  // fact(n)=n*fact(n-1);
  // int  big=n*small;
     return n*fact(n-1);
}
int main()
{
  int n;
  cin>>n;
 int a= fact(n);
 cout<<a;
  return 0;

}  */
/*
int power(int n)
{
    if (n==0)
    return 1;
    return 2*power(n-1);

}
int main()
{
  int n;
  cin>>n;
  int a=power(n);
  cout<<a;


}  */
int counting(int n)
{
   if(n==0)
   { 
    return 0;
     }
     cout<<n<<endl;
   counting(n-1);
  // cout<<n<<endl;
   return n;


}
int main()
{
 int n;
 cin>>n;
 counting(n);

}