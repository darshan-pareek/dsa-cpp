#include <iostream>
#include <string>
#include <vector>
#include<stack>


using namespace std;



int countPossibilities(vector<int>arr,vector<int>brr) {
	int count=0;
    int n = arr.size();
    int m = brr.size();

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (arr[i] < brr[j]) {
                for (int k = i + 1; k < n; ++k) {
                    if (brr[j] < arr[k]) {
                        count++;
                    }
                }
            }
        }
    }
    return count;
}
vector<int> mArr(string str) {
    stack<char>s;
    int size = str.length();
    int count = 0; 
    // for(int i = 0;i<size-1;i++){
    //     if(str[i]!=str[i+1]){
    //         count++;
    //     }
    // }
    vector<int> arr;

    for (int i = 0; i < size; i++) {
        s.push(str[i]);
    }
    char c;
     while (!s.empty()) {
        c = s.top();
        count++;
        s.pop();
        if (s.empty()) break; 
        char a = s.top();

        if (c != a) {
            arr.push_back(count);
            count = 0;
        }
        c = a;
    }
    arr.push_back(count);
    int n=arr.size();
    vector<int> arr1;
    for(int i=0;i<n;i++){
        arr1.push_back(arr.back());
        arr.pop_back();
    }



    return arr1;
}

int givecount(vector<int> arr)
{  
    	int count=0;
    int n = arr.size();
    int i=0;
    int j=1,k=2;
    while(i<n-2)
    {
        

    }
    cout<<count<<endl;
    return count;


    
}

int main() {
    string rowAshok, rowAnand;
    getline(cin, rowAshok);
    int size = rowAshok.length();
    vector<int> ashok = mArr(rowAshok);
    int a = ashok.size();
    for(int i=0;i<a;i++)
    {
        cout<<ashok[i]<<"   ";
    }

            
  
    return 0;
}