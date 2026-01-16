/*
#include <iostream>
#include <string>

using namespace std;

// you just need to implement this function
bool containsGlitchPattern(const string& videoStream, const string& glitchPattern) {
    // your code here
    int l=videoStream.size();
    int p=glitchPattern.size();
    bool flag=0;
    for(int i=0;i<l;i++)
    {
        for(int j=0;j<p;j++)
        {
            if(videoStream[i+j]==glitchPattern[j])
            {
                  flag=true;
               
            }
            else
            {
                flag=false;
                break;
            }

        }
        if(flag==true)
        return 1;
        
    }
    return 0;
 }

int main() {
    string videoStream, glitchPattern;
    cin >> videoStream;
    cin >> glitchPattern;

    // please do not change the below code
    if (containsGlitchPattern(videoStream, glitchPattern)) {
        cout << "true";
    } else {
        cout << "false";
    }

    return 0;
}

*/

/*
#include <iostream>
#include <string>
#include <sstream>
#include <bits/stdc++.h>
#include<map>

using namespace std;

// you just need to implement this function
string mostCommonWord(string document) {
    // your code here
     transform(document.begin(), document.end(), document.begin(),
              ::tolower);
    map<string,int>m;
    istringstream stream(document);
    string word;
    while(stream>>word)
     ++m[word];
    
    string maxword;
    int maxcount=0;

    for(auto &entry : m)
    {
        if(entry.second>maxcount)
        {
            maxword=entry.first;
            maxcount=entry.second;
        }
    }


    

    return maxword;
}

int main() {
    string document;
     getline(cin,document);

    // please do not change the below code
    cout << mostCommonWord(document);
    return 0;
}

*/

#include<iostream>
#include<vector>
using namespace std;

int main()
{

  vector<vector<int>> teams ;
   int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int team_size;
        cin >> team_size;
        vector<int> team(team_size);
        for (int j = 0; j < team_size; j++) {
            cin >> team[j];
        }
        teams.push_back(team);
    }
    

}
