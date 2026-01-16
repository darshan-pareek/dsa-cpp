#include<bits/stdc++.h>
using namespace std;
int maxi(int arr[],int n){
    int max=0;
    for(int i=0;i<n;i++){
        if(arr[max]<arr[i]){
            max=i;
        }
    }
    return max;
}
void increament(int arr[],int index){
for(int i=0;i<index;i++){
    if(arr[i]>=0){
        arr[i]++;
    }
}
}
int main()
{
    int n;
    cin>>n;

 int arr[n];
 for(int i=0;i<n;i++){
    cin>>arr[i];
 }
 int a;
 cin>>a;
   a-=1;
    int count=0;
 for(int i =0;i<n;i++){
    int index = maxi(arr,n);
    arr[index]=-1;
    increament(arr,index);
    count++;
    if(arr[a]<0){
        break;
    }
 }

cout<<count;
return 0;
}