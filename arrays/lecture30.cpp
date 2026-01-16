#include<iostream>
using namespace std;
//macro
#define pi 3.14
#define Area(l ,b) (l*b) //space should not be given bw area and small brackets
#define area2(r) (pi*r*r)
int main()
{
   int n=5;
   int l=4;
   int b=7;
   cout<<"area of cicle is "<<pi*n*n<<endl;
   int area=Area(l, b);
   cout<<"area of rectangle is"<<area<<endl;
   cout<<"area is"<<area2(n);

}
