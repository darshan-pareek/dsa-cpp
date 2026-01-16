/*#include<iostream>
using namespace std;
int main()
{    int n=5;
     int a=0;
    for(int i=5;i>0;i--)
    {
        for(int j=1;j<=i;j++)
       cout<<j;
      //  for(int p=0;p<i;p++)
         for (int i=0;i<a;i++)
        cout<<"*";

        a=a+2;
        
        
        
                for(int k=i;k>0;k--)
        cout<<k;
        cout<<"\n";
    }

}
*/
/*
#include<iostream>
using namespace std;
int main()
{   int n,p;
   cin>>n;
    int multiply=1;
    int sum=0;
    while(n>0)
    {
      p= n%10;
      sum=sum+p;
      multiply=multiply*p;
      n=n/10;


    }
    cout<<multiply-sum;
}
*/

/*
#include<iostream>
using namespace std;
int main()
{
  int a,p;
  cin>>a;
  switch(1)
  {
   case 1:
   p=a/100;
   a=a%100;
   cout<<p<<"number of 100 notes"<<"\n";

   case 2 :
   p=a/50;
   a=a%50;
   cout<<p<<"number of 50 notes"<<"\n";

   case 3:
   p=a/20;
    a =a%20;
   cout<<p<<"numbe rof 20 notes"<<"\n";

   case 4:
   p=a/10;
    a=a%10;;
   cout<<p<<"number of 10 notes"<<"\n";

  }


}
*/
/*

#include<iostream>
using namespace std;
bool iseven(int a)
{
  if (a&1)
  return 0;
  return 1;
}
int main()
{
  int a;
  cin>>a;
  cout<<iseven(a);


}
*/
/*
#include<iostream>
using namespace std;
int main()
{

  int arr[5]={2,3,4,5,6};
  int start=0;
  int end=4;
  while(start<=end)
  {
    swap(arr[start],arr[end]);
    start++;
    end--;

  }
  for(int i=0;i<5;i++)
  cout<<arr[i];
}
*/
/*
#include<iostream>
using namespace std;
int main()

{
int ans=0;
  int arr[5]={1,3,4,2,3};
  for(int i=0;i<5;i++)
  ans=ans^arr[i];
  for(int i=0;i<5;i++)
  ans=ans^i;
  cout<<ans;
}
*/
/*
#include<iostream>
using namespace std;
int binary(int arr[],int size,int key)
{
  int start=0;
  int end=size-1;
  int mid= start+(end-start)/2;
  while(start<=end)
  {  
   if (key==arr[mid])
    return mid;
    if(key>arr[mid])
    {
      start=mid+1;

    }
    if(key<arr[mid])
    end=mid-1;

    mid= start+(end-start)/2;

  }
   return -1;

}
int main()
{
 int arr[10]={1,3,6,9,11,15,18,21,41,51};
 int key;
 cin>>key;
 int l=binary(arr,10,key);
  cout<<l;
}
*/
/*
#include<iostream>
using namespace std;
int main()
{
  int arr[7]={7,1,5,4,3,2,19};
  for(int i=0;i<7;i++)
  {   int compare=i;
   
     for(int j=i+1;j<7;j++)
     {
       if(arr[j]<arr[compare])
       {compare=j;
       
       }
     }
     //if (compare!=i)
      swap(arr[compare],arr[i]);
     
     

  }
  for(int i=0;i<7;i++)
  cout<<arr[i]<<" ";
  
}

*/
/*
#include<iostream>
using namespace std;
int main()
{
  int arr[7]={7,1,5,4,3,2,19};
  for(int i=0; i<7;i++)
  {
    for(int j=0;j<7-i;j++)
    {
      if(arr[j]>arr[j+1])
      swap(arr[j],arr[j+1]);
       
    }


  }
  for(int i=0;i<7;i++)
  cout<<arr[i]<<" ";
}
*/
/*
#include<iostream>
#include<array>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
using namespace std;
int main()
{
  array<int,4>a={1,2,3,4};
  vector<int> v(5,1);
  v.push_back(2);
 // v.begin();
   //for(int i:v)
 //  cout<<i;
   


    set<int> s;
    s.insert(5);
    s.insert(5);
    s.insert(2);
    for(auto i:s)
    cout<<i;
    cout<<s.count(10);
    cout<<"\n";
    map<int,string> m;
    m[14]="darshan";
    m[28]="pareek";
   for(auto i:m)
    cout<<i.second;

    cout<<"\n";

    vector<int> arr;
    arr.push_back(2);
    arr.push_back(21);
    arr.push_back(27);
    arr.push_back(29);
    arr.push_back(210);
    cout<<binary_search(arr.begin(),arr.end(),28);
   // cout<<lower_bound(arr.begin(),arr.end(),4);
  // cout<<upper_bound(arr.begin(),arr.end(),4);


}

*/
/*
#include<iostream>
#include<vector>
using namespace std;
int main()
{
  char ch[7];
  char temp[7];
  int count=1;
  int l=0;
  for(int i=0;i<7;i++)
 { cin>>ch[i];}
 for(int i=0;i<7;i++)
 { cout<<ch[i]<<" ";}
  for(int i=0;i<7;i++)
  {
    if(ch[i]=ch[i+1])
    count++;
    //if(ch[i]!=ch[i+1])
    else
    {
      temp[l++]=ch[i];
    temp[l++]=count;
    count=1;
    }
  }
  for(int k=0;k<7;k++)
  cout<<temp[k]<<" ";


}

*/
/*
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
  vector<vector <int>> arr {{1,2,3},{4,5,6},{7,8,9}};
  vector<int > ans;
  int endingrows=arr.size()-1;
  int endingcol=arr[0].size()-1;
  int startingrow=0;
  int startingcol=0;
  int total=9;
  int count =0;
  while(total>count)
  {   
    for(int i=startingcol;i<=endingcol && count<total;i++)
    {
         ans.push_back(arr[startingrow][i]);
         count++;
        
    }
     startingrow++;
      for(int i=startingrow;i<=endingrows && count<total;i++)
    {
         ans.push_back(arr[i][endingcol]);
         count++;
         
    }

     endingcol--;
      for(int i=endingcol;i>=startingcol && count<total;i--)
    {
         ans.push_back(arr[endingrows][i]);
         count++;
    }
     endingrows--;
      for(int i=endingrows;i>=startingrow && count<total;i--)
    {
         ans.push_back(arr[i][startingcol]);
         count++;
    }
     startingcol++;
  

  }
      for(int k=0;k<count;k++)
      cout<<ans[k]<<" ";

      cout<<"\n";

     // rotate matrix by 90

     for(int i=0;i<3;i++)
     {
      for(int j=i;j<3;j++)
      {
        swap(arr[i][j],arr[j][i]);

      }
     }
      

     for(int i=0;i<3;i++)
     {
      for(int j=0;j<3;j++)
      {
        cout<<arr[i][j]<<" ";

      }
      cout<<"\n";
     }


}
*/
/*
#include<iostream>
using namespace std;
void print(int *l)
{
  cout<<*l<<endl;
  l=l+1;
}
int main(){
 int num=5;
 int *ptr= &num;
 cout<<*ptr;

 char b[]="xyz";
 char *c=&b[0];
 cout<<c;
cout<<"\n";
int value=5;
int *l=&value;
cout<<l<<"\n";
print(l);

int *i= new int;


}

*/
/*
#include<iostream>
using namespace std;
int recursion(int t)
{

   int ans;
   if (t<=0)
   return 1;
   if(t>0)
   ans=2*recursion(t-1);
   return ans;

}

int factorial(int l)
{   int ans;
  if(l<=0)
  return 1;
  if(l>0)
  
  return l*factorial(l-1) ;



}
int fibancani(int p)
{
    if(p<=1)
    return p;
    if(p>0)
    return fibancani(p-1)+fibancani(p-2);

}

  bool sorted(int arr[],int size)
  {
      
     
    
    


  }
  int search(int arr[],int s,int e,int key)
  {
   
   int mid=s+(e-s)/2;
   if(arr[mid]==key)
    return mid;
  if(arr[mid]>key)
   return search(arr,s,mid-1,key);
   if(arr[mid]<key)
    return search(arr,mid+1,e,key);

  return 0;


  }

   int anypower(int a,int b)
   {
     if(b==0)
     return 1;
     if(b==1)
     return a;
     if(b%2==0)
     return anypower(a,b/2)*anypower(a,b/2);
     else
     {
      return  a*anypower(a,b/2)*anypower(a,b/2);
     }


   }
int main()
{
   int a;
   cin>>a;
   int p=recursion(a);
   cout<<p;

   int b;
   cin>>b;
   int l = factorial(b);
   cout<<l<<endl;
   int k;
   cin>>k;
   cout<<fibancani(k)<<endl;
   int arr[9]={3,6,9,11,45,56,67,78,99};
   cout<<sorted(arr,9)<<endl;
   cout<<search(arr,0,9-1,78)<<endl;
   int base;
   int power;
   cin>>base;
   cin >>power;
   cout<<anypower(base,power)<<endl;

}
*/

#include<iostream>
#include<vector>
using namespace std;
int bsort(vector<int>& vec,int a)
{  
  if(a<0)
  return 0;
  for(int i=0;i<a-1;i++)
  {

if(vec[i]>vec[i+1])
swap(vec[i],vec[i+1]);
  
  }
  return bsort(vec,a-1);
  

}

int qsort(vector<int> vec,int a)
{
   


}
int main()
{
  vector<int> v={4,55,32,1,8,9,34};
  int a=v.size();
  for(int i=0;i<a;i++)
  cout<<v[i]<<"  ";
  cout<<endl;
  bsort(v,a);
 for(int i=0;i<a;i++)
  cout<<v[i]<<"  ";
  cout<<endl;
  qsort(v,a);

}