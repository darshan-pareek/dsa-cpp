#include <iostream>
#include <string>
#include <vector>


using namespace std;



int countPossibilities(vector<int>arr,vector<int>brr) {

    int count=0;
    int n = arr.size();
    int m = brr.size()-1;
    int i=0;
    int j=0;
    int k=i+1;
    while(i<n){
        if(arr[i]<brr[j] && brr[j]<arr[k] && k<n){
        // cout<<i<<" "<<j<<" "<<k<<" "<<endl;
            count++;
            k++;
        }
        else if(k>=n && j<=m){
            j++;
            k=i+1;
        }else if(j>m){
            i++;
            j=0;
            k=i+1;
        }
        else{
        k++;
        }
    }
    return count;
}
vector<int> mArr(string str){
    vector<int>mArr;
    long long int size = str.length();
    for(long long int i=0;i<size;i++){
        if(str[i]=='M'){
          mArr.push_back(i);
        }
    }
    return mArr;
}
vector<int> lArr(string str){
    vector<int>lArr;
    long long int size = str.length();
    for(long long int i=0;i<size;i++){
        if(str[i]=='L'){
            lArr.push_back(i);
        }
    }
    return lArr;
}

int main() {
    string rowAshok, rowAnand;
    getline(cin, rowAshok);
    // getline(cin, rowAnand);
    int anandsCount = 0;
    int ashoksCount = 0;
    // if(rowAshok.length()<3 && rowAnand.length()<3){
    //   anandsCount = 0;
    //   ashoksCount = 0;
    //   cout<<"1";
    // }
    // else if(rowAshok.length()<3){
    //   ashoksCount = 0;
    //   cout<<"2";
    // }
    // else if(rowAnand.length()<3){
    //   anandsCount = 0;
    //   cout<<"3";
    // }
    // else if(rowAshok.length() == 3 && rowAnand.length() ==3  ){
	// 	if(rowAshok == "MLM" || rowAshok == "LML" ){
    //     ashoksCount++;
    //     }
    //   if(rowAnand == "MLM" || rowAnand == "LML" ){
    //   anandsCount++;
    //   }
    // }
  	// else{
    vector<int> mAshok = mArr(rowAshok);
    vector<int> lAshok = lArr(rowAshok);
    // vector<int> lAnand = lArr(rowAnand);
    // vector<int> mAnand = mArr(rowAnand);

    if(mAshok.size() >0 && lAshok.size()>0){
    ashoksCount += countPossibilities(lAshok,mAshok);
    ashoksCount += countPossibilities(mAshok,lAshok);
    }
    cout<<ashoksCount<<endl;
    //  if( mAnand.size() > 0 && lAnand.size() > 0){
    // anandsCount += countPossibilities(mAnand,lAnand);
    // anandsCount += countPossibilities(lAnand,mAnand);
    // }
    // }
//    if (ashoksCount > anandsCount) {
//         cout << "Ashok";
//     } else if (anandsCount > ashoksCount) {
//         cout << "Anand";
//     } else {
//         cout << "Draw";
//     }
    return 0;
}