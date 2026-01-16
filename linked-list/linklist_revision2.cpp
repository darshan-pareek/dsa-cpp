//singly link list
#include<iostream>
using namespace std;

class node
{
  public:
  int data;
  node * next;
  node(int data)
  {
    this->data=data;
    next=NULL;

  }


};
void insert_at_head(node * &head,int data)
{
    node * temp=new node(data);
    temp->next=head;
    head=temp;


}
void insert_at_tail(node * &tail,int data)
{
      node * temp=new node(data);
      tail->next=temp;
      tail=temp;

}
void print_ll(node * head)
{
    node * temp=head;
    while(temp!=NULL)
    {
         cout<<temp->data<<" ";
         temp=temp->next;

    }
    cout<<endl;
   

}


int main()
{
    node * NODE = new node(16);
   // cout<<NODE->data;
    node * head = NODE;
    node * tail=NODE;
    //cout<<head->data<<" "<<head->next;

   insert_at_head(head,25);
   
   insert_at_head(head,34);
   
   insert_at_head(head,332);
   
   insert_at_head(head,12);
   print_ll(head);

   insert_at_tail(tail,24);
   insert_at_tail(tail,243);
   insert_at_tail(tail,2422);
   insert_at_tail(tail,242);
      print_ll(head);
    
  
   


}