#include<iostream>
using namespace std;
class Node
{
  public:
  int data;
  Node* next;
  Node(int data)
  {
    this->data=data;
    this->next=NULL;

  }

  ~Node()
  {
     int value=this->data;
     if(this->next!=NULL)
     {
       delete next;
       this->next=NULL;

     }
  }
};

void insertatdata(int data,int value,Node * &tail)
{        Node * temp=new Node(data);
     //when llis is empty
    if(tail==NULL)
    {
      tail=temp;
      temp->next=temp;   
    }
 else{
    Node *temp1=tail;
   
   while(temp1->data!=value)
   {temp1=temp1->next;
   }
   temp->next=temp1->next;
   temp1->next=temp;}


}

void deletenode(Node * &tail,int data)
{   

    //empty list
    if(tail==NULL)
    {
        cout<<"list is empty";
        return;
    }
    else{
   Node *temp1=tail;
   Node * temp=temp1->next;
   //single element in link list
   if(temp1==temp)
   {
    delete tail;
   }
 
   while (temp->data!=data)
   {  temp1=temp;
    temp=temp->next;
   }
   temp1->next=temp->next;
   if(tail==temp)
{
  //in cicrcular ll tail can be anywhere
    tail=temp1;
}
   temp->next=NULL;
   delete temp;

    }

}
void print(Node *&tail)
{
   Node * temp1=tail;
   do
   {
    cout<<temp1->data<<" ";
    temp1=temp1->next;
   } while (temp1!=tail);
     cout<<endl;

}

int main()
{

    //Node * node1= new Node(10);
    Node * tail =NULL;
   // node1->next=tail;
    //  cout<<node1->data<<endl;
    //cout<<node1->next<<endl;
     //insertatdata(15,10,tail);
     insertatdata(10,0,tail);
    insertatdata(15,10,tail);
     insertatdata(26,10,tail);
    
     insertatdata(88,26,tail);
     insertatdata(45,15,tail);
         print(tail);
     deletenode(tail,10);
    
    print(tail);




}