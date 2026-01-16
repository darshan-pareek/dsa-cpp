#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
  unordered_map<string,int>m;
  //insertion
  //1st way
  pair<string,int> p = make_pair("darshan",3);
  m.insert(p);

  //2nd way
  pair<string,int>p2("pareek",5);
  m.insert(p2);

  //3rd way
m["rrr"]=5;

m["rrr"]=32;

//searching

cout<<m["darshan"]<<endl;
cout<<m.at("pareek")<<endl;

//size
cout<<m.size()<<endl;

//count ie any key available or not

cout<<m.count("darshan")<<endl;
cout<<m.count("ppp")<<endl;


//to delete 

m.erase("rrr");
cout<<m.size()<<endl;

//to print the map
//1st
for(auto i:m)
cout<<i.first<<" "<<i.second<<endl;

//2nd by iteration


unordered_map<string,int> :: iterator it=m.begin();

while (it!=m.end())
{
    cout<<it->first<<" "<<it->second<<endl;
    it++;
}



}
