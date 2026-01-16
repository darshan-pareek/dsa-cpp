#include<iostream>
using namespace std;

class student
{
  int age;
  string name;
  int height;
  public:
  int getage()
  {
    return this->age;
  }

};

class human
{
    public:
  int age;
  int height;
  int weight;


};
class male : public human
{
  public:
  void fun()
  {
    cout<<"sb chal rha h";
  }


};


int main()
{
  student s1;
  cout<<s1.getage()<<endl;
  male m2;
  m2.age=55;
  m2.fun();

}
