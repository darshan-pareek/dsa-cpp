#include <bits/stdc++.h>

using namespace std;



int countPossibilities(vector<int>arr) {
	int count=0;
    int n = arr.size();
    // int prod = 1;
    for (int i = 0; i < n; i++) {
        for(int j = i+1;j<n;j++){
            for(int k = j+1;k<n;k++){
                if(i%2==(j+1)%2 && j%2==(k+1)%2 ){
                count += arr[i]*arr[j]*arr[k];
                }
            }
        }

    }
    cout<<count<<endl;
    return count;
}
vector<int> mArr(string str) {
    stack<char>s;
    int size = str.length();
    int count = 0; 

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
    return arr;
}

int main() {
    string rowAshok, rowAnand;
    getline(cin, rowAshok);
    getline(cin, rowAnand);
    int anandCount = 0;
    int ashokCount = 0;
    vector<int> ashok = mArr(rowAshok);
    vector<int> anand = mArr(rowAnand);
    reverse(ashok.begin(),ashok.end());
    reverse(anand.begin(),anand.end());
    if(ashok.size()>3 && anand.size()>3){
    anandCount = countPossibilities(anand);
    ashokCount = countPossibilities(ashok);
    }
    else if(ashok.size()<3 && anand.size()>3){
        anandCount++;
    }
    else if(ashok.size()>3 && anand.size()<3){
        ashokCount++;
    }

    if(ashokCount>anandCount){
        cout<<"Ashok";
    }
    else if(ashokCount<anandCount){
        cout<<"Anand";
    }
    else{
        cout<<"Draw";
    }

    return 0;
}