#include<iostream>
#include <climits>
using namespace std;
int main()
{   int arr[6]={1,4,77,3,99,47};
int n=6;
    int max=0;
    int min=0;

     int maxi=INT_MIN;
     for(int i=0;i<n;i++)
     maxi=(maxi,arr[i]);
     

     
    /*
 for(int i=1;i<n;i++)
  {if(arr[i]>arr[max])
  max=i;
  }
  
  for(int i=1;i<n;i++)
  {
    if(arr[min]>arr[i])
    min =i;
  }
  cout<<arr[max]<<" "<<arr[min];
*/

}