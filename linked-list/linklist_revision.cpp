#include<iostream>
using namespace std;

class Node
{
 public:
   int data;
   Node * next;
    Node(int data)
    {
      this->data=data;
      this->next=NULL;

    }


};

void insertinhead(Node * &head,int d)
{
    Node * temp = new Node(d);
    temp->next=head;
    head=temp;

}

void insertattail(Node * &tail,int d)
{
    Node *temp=new Node(d);
    tail->next=temp;
    tail=temp;

}

void inseratpostion(Node * &head,int p,int d)
{
  Node * temp =new Node(d);
  Node * temp1=head;
 int c;

  while(c<p-1)
{
   temp1=temp1->next; 
   c++;

}
  temp->next=temp1->next;
   temp1->next=temp;


}
void print(Node * &head)
{
   Node *temp1=head;
    while(temp1!=NULL)
    {cout<<temp1->data<<" ";
    temp1=temp1->next;

}}

int main()
{
  Node *node1= new Node(10);
  cout<<node1->data<<endl;
  cout<<node1->next<<endl;

  Node *head=node1;
  Node *tail=node1;
  insertattail(tail,15);
 insertattail(tail,27);
  insertattail(tail,65);
  inseratpostion(head,2,49);
  print(head);

}