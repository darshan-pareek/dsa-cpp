#include<iostream>
using namespace std;
int main()
{
   int num=5;
   int *ptr=&num;
   cout<<"value is"<<*ptr<<endl;
   cout<<"address is"<<ptr<<endl;
   cout<< &num<<endl;
   cout<<"size of num is "<< sizeof(num)<<endl;
   cout<<"size of pointer is "<< sizeof(ptr)<<endl;
   cout<<"size of pointing is "<< sizeof(*ptr)<<endl;
   int i=3;
   int *p=&i;
   int *q=p;
   cout<<"value is   "<<*p  << " - "<< *q <<endl;
   cout<<" address is   "<< p<< " - "<< q<<endl;
   (*p)++;
   cout<<"increment value is    "<<(*p)<<" - "<<*q<<endl;
   cout<<"incremenet by q   "<<(*q)<<" - "<<&i<<endl;
   p=p+1;
   cout<<"new add is   "<<p<<"  -  "<<q<<endl;
   cout<<"maybe new value   "<<(*p)<<" - "<<(*q)<<endl;

   
   return 0;



}