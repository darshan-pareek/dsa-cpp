#include<iostream>
#include<math.h>
#include<string>
#include<algorithm>
#include<vector>
#include<unordered_set>
using namespace std;
int main()
{
    cout<<"hello";
    int a;
    string c;
   /* a=cin.get();
    cout<<a; */
    getline(cin,c);
    cout<<c;
    int m;
    cin>>m;
    int i=0;
    int sum=0;
    // sum of even nu
    while (i<m)
    {
        if(i%2==0)
        sum=sum+i;
        i++;

    }
    cout<<sum<<endl;


    // printing pattern

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5-i;j++)
        cout<<" ";
        for(int k=0;k<2*i+1;k++)
        cout<<"*";
        cout<<endl;
    }
     cout<<endl;
     
     for(int i=0;i<5;i++)
     {
        for(int j=0;j<5-i;j++)
        cout<<" ";
        for(int k=0;k<2*i+1;k+=2)
        {
            cout<<"*";
            cout<<" ";
        }
        cout<<endl;
     }


     cout<<endl;
     for(int i=0;i<5;i++)
     {
        for(int k=0;k<i;k++)
        cout<<" ";
        for(int l=0;l<(2*5)-2*i-1;l++)
        cout<<"*";
        cout<<endl;
     }
     for(int i=1;i<5;i++)
    {
        for(int j=1;j<5-i;j++)
        cout<<" ";
        for(int k=0;k<2*i+1;k++)
        cout<<"*";
        cout<<endl;
    }
     cout<<endl;

     int n=11;
     for(int i=1;i<=2*n-1;i++)
     {  int space;
        if(i<=n)
        space=i-1;
        else
       { space= 2*n-i-1;
        }
        int pattern=abs(2*n - 2*space -1 );
        for(int k=0;k<space;k++)
        cout<<" ";
        for(int l=0;l<pattern;l++)
        cout<<"*";
        cout<<endl;
     }

     cout<<endl;

     for(int i=0;i<5;i++)
     {
         for(int j=0;j<5;j++)
         if(i==0 || i==4 || j==0 || j==4)
             cout<<"*";
        else
            cout<<" ";
        
        cout<<endl;
    }
     
    cout<<endl;

      string st="ABCABCAB";
      string as="AB";
      string binary="";
      int p=128;
      i=0;
      while(p!=0)
      { 
        binary=to_string(p & 1) + binary;
        p = p>>1;

      }
      cout<<endl<<binary;

    // switch

    int price =1350;
    switch (1)
    {
    case 1:
       cout<<"no of 100s note is"<< price/100<<endl;
       price=price%100;
    case 2:
    cout<<"no of 50s note is"<< price/50<<endl;
    price=price%50;
    case 3:
    cout<<"no of 20s note is"<< price/20<<endl;
    price=price%20;
    default:
        break;
    }

    int no =513;
    if(no & 1)
    cout<<"odd no"<<endl;
    else
    cout<<"even no"<<endl;

    int v[50]={1,2,3,4,5};
    cout<<v<<endl;
    cout<<sizeof(v)<<endl;
    cout<<sizeof(v)/sizeof(int)<<endl;

    //unique element
    int array2[5]={2,3,4,3,2};
    int ans=0;
    for(int i=0;i<5;i++)
    {ans=ans^array2[i];
      cout<<ans<<" ";
    }
    cout<<ans<<endl;

    // duplicate no
    int arr3[5]={1,2,3,4,4};
     ans=0;
    for(int i=0;i<5;i++)
    {
        ans=ans ^ arr3[i];
        cout<<ans<<" ";
    }
    cout<<endl;
    for(int i=0;i<5;i++)
    {
        ans=ans ^ i;
        cout<<ans<<" ";
    }
      cout<<ans<<endl;
     

      // binary search
      int arr4[5]={3,8,9,1,2,};
      int s=0;
      int e=4;
      int mid=s+(e-s)/2;
      while(s<e)
      {
        if(arr4[mid]>arr4[mid-1])
        {cout<<mid<<" ";
        break;}
        else if(arr4[mid]>arr4[s])
        s=mid+1;
        else
        e=mid;
        mid=(s+e)/2;
      } 

      /// selection sort
      int arr5[5]={3,8,9,1,2};
      for(int i=0;i<5;i++)
      {
        int minindex=i;
        for(int j =i+1;j<5;j++ )
        {

            if(arr5[j]<arr5[minindex])
            minindex=j;

           }
           swap(arr5[minindex],arr5[i]);
        
      }
      cout<<endl;
      for(int i=0;i<5;i++)
      cout<<arr5[i]<<" ";
      
      // Bubble sort
      int arr6[5]={3,28,19,21,12};
      for(int i=1;i<5;i++)
      {
        for(int j=0;j<5-i;j++)
        {
            if(arr6[j]>arr6[j+1])
            swap(arr6[j],arr6[j+1]);
        }
      }
      cout<<endl;
      for(int i=0;i<5;i++)
      cout<<arr6[i]<<" ";

      // insertion sort
      int arr7[5]={3,28,9,2,12};







      //  stl binary search

      vector<int> arr8;
      arr8.push_back(1);
      arr8.push_back(9);
      arr8.push_back(11);arr8.push_back(15);arr8.push_back(19);
      cout<<endl<<binary_search(arr8.begin(),arr8.end(),6)<<endl;


      cout<<lower_bound(arr8.begin(),arr8.end(),6)-arr8.begin()<<endl;
      cout<<upper_bound(arr8.begin(),arr8.end(),6)-arr8.begin()<<endl;


       //string

       string name= "darshan";
       cout<<name.find("na");
      cout<<name.erase(name.find("a"),1);
        cout<<name;  
     
        string s1="({[]})";
        if(s1[2]=='}');

        

        // Pointer
               cout<<endl<<endl;
        int num=5;
           int * x= &num;
           cout<<num<<" "<<*x<<endl;
           num+=1;
           cout<<*x<<endl;
           *x=*x+1;
           cout<<*x<<endl;
           x=x+1;
           cout<<*x<<" "<<num;

           char z[]="xyz";
           char *x1= &z[0];
           cout<<x1 << z;

           /// Heap memory
               cout<<endl;
           int *m3=new int(5);
           cout<<*m3<<endl;

           //dynamic array
           int *m4 =new int[n];

           // inline function
  /*
           inline add(int &a ,int &b)
           return a+b;

           */

         /*  string word1="abac";
           string word2 = "babc";
           unordered_set<string> s1;
           unordered_set<string>s2;
           s1.insert(word1);
           s2.insert(word2);
           bool ans=(s1!=s2);
           cout<<ans<<endl;
   
           */

          

 }

