#include<iostream>
#include<vector>
using namespace std;
/*
int fun(string& a,int i,int j)
{
   if(i>j)
     return 0 ;
      swap(a[i],a[j]);
      i++;
      j--;
      fun(a,i,j);


}
int main()
{     //reverse of string using recursion
   string a="darshan";
   int b= a.size()-1;
   fun(a,0,b);
   cout<<endl<<a<<"  ";

}
*/

int power(int a,int b)
{
   if(b==0)
   return 1;
   if(b==1)
   return a;
   int ans=power(a,b/2);
   if(b&1==0)
   {
      return ans*ans;
   }
   else
   {
      return a*ans*ans;
   }
}
int main()
{
   int a,b;
   cin>>a>>b;
 int ans=  power(a,b);
 cout<<ans;
}

/*
void fun(int v[],int n)
{
   if(n<0)
   return ;

   for(int i=0;i<n-1;i++)
{

    if(v[i]>v[i+1])
    {
      swap(v[i],v[i+1]);
    }

}

    fun(v,n-1);
   


}

int main()
{
 int v[6]={4,2,6,1,5,9} ;
  fun(v,6);
  
 for(int i=0;i<6;i++)
  {

   cout<<v[i]<<"  ";
  }

}
*/