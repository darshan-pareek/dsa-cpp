#include<iostream>
using namespace std;
int main()
{
   /*int arr[10]={0};
   //using pointer
   int *ptr=&arr[0];
   cout<<"address of dirst "<<ptr+1<<endl;
   cout<<"address is "<< &arr[1]<<endl;
   cout <<"value is"<<arr[0]<<endl;
   ptr=ptr+1;
   cout<<ptr;
   cout<<"size of arr"<<sizeof(arr)<<endl;
    cout<<"size of pointer"<<sizeof(ptr)<<endl;
    cout<<"size of "<<sizeof(*arr)<<endl;
    cout<<"size of"<<sizeof(&arr)<<endl;
    */
    char ch[6] = "abcde";
    cout<<ch<<endl;
    char *p=&ch[0];
    cout<<*p<<endl;



}
