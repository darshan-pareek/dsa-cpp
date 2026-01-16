#include<iostream>
#include <string.h>
using namespace std;

class Hero
{  private:
    int health;
    char level;
   
   public:
       char *name;
       static int timetocom;
       static int random()
       {
        // return name;
         return timetocom;

       }

//constructor
   Hero()
   {
    name=new char[100];
    cout<<"constructor is called"<<endl;

   }
   /*
//constructor
   Hero()
   {
    cout<<"constructor is called"<<endl;

   }
 // parameterize constructor
 Hero(int health,int level)
 {  cout<<"parameterize constuctor is ncalled"<<endl;
    this->health=health;
    this->level=level;

 }

//copy constructor
  Hero(Hero & temp)
  {  cout<<"copy constructor is called";
    this->health=temp.health;
    this->level=temp.level;

  }
    void print()
    {
        cout<<"health : "<<health<<endl;
        cout<<"level :"<<level<<endl;
    }
   int gethealth()
   {
    return health;
   }
   void sethealth(int h)
   {
    health=h;
   }
   */
    void setter(char name[],int health,char level)
    {
        strcpy(this->name,name);
        this->health=health;
        this->level=level;

    }


     //shalow copy
     void print()
    {    cout<<"name :"<<name<<endl;
        cout<<"health : "<<health<<endl;
        cout<<"level :"<<level<<endl;
        cout<<endl<<endl;
    }


    //for deep copy we need copy constructor
    Hero(Hero & temp)
    {
       char *charname=new char[strlen(temp.name)+1];
       strcpy(charname,temp.name);
       this->name=charname;

    }

//destructor
~Hero()
{
  cout<<endl<<"destructor is called";
}

};

int Hero::timetocom=10;

int main()
{
  cout<<Hero::timetocom<<endl;
  cout<<Hero::random();








  /*
  Hero h1;
  Hero *b=new Hero();
  delete b;
    */
  
  
  
   /*
  Hero h1;
  char name[10]="DARSHAN";
  h1.setter(name,10,'A');
  h1.print();
  Hero h2(h1);
  h2.print();
  h1.name[0]='P';
  h1.print();
  h2.print();


*/




  /*
    //constructor
    Hero ram(70,'A');

    ram.print();
    Hero *h=new Hero(80,'B');
    h->print();

    Hero veer(ram);
    veer.print();


Hero ramesh;
  cout<<"size is:"<<sizeof(ramesh)<<endl;
  cout<<ramesh.gethealth()<<endl;
  ramesh.sethealth(40);
  cout<<"health is :"<<ramesh.gethealth()<<endl;

  Hero *b=new Hero;
  b->sethealth(49);
  cout<<b->gethealth()<<endl;


*/
}

