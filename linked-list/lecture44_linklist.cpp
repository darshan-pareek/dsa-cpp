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
     this->next =NULL;

   }
   //destructor
 
   ~Node()
  {
   int  value= this->data;
   if(this->next!=NULL)
  { delete next;
   this->next=NULL;
  }
     cout<<"memory free from the node with data : "<<value<<endl;
  }
  



};
//we dont want to create any copy of head thats why we we take refetence  of head 
void insert_at_head(Node * &head,int d)
   {
    //creating new node by given parameter
    Node * temp= new Node(d);
    temp->next=head;
    head=temp;
       

   }

void insert_at_tail(Node * &tail,int d)
{
    Node * temp1=new Node(d);
    tail->next = temp1;
   // tail=tail->next;
      tail=temp1;
}



void inser_at_position(int position,int data,Node * &head,Node * &tail)
{   Node * temp= new Node(data);
   Node * temp1 = head;
    int count=1;

    if(position==1)
    {
      insert_at_head(head,data);
      return;
    }
    
    while(count<position-1)
    {
        temp1=temp1->next;
        count++;
    }
      if(temp1->next==NULL)
      {
         insert_at_tail(tail,data);
         return ;
      }
     temp->next=temp1->next;
     temp1->next=temp;
     
}


//deleting a node
void deletionofnode(int position,Node * &head,Node * &tail)
{   //deletion of firtst node
    if(position==1)
    { 
        Node * temp=head;
      head=head->next;
      //before deleting any node it should also do ot point to next node 
      temp->next=NULL;
      delete temp;

    }
    else
    {
      //deleting any middle of last node
      int count=1;
      Node * previous =NULL;
      Node * current =head;
      while(count<position)
      {
        previous=current;
        current=current->next;
        count++;
      }
      previous->next=current->next;
      tail=previous;
      current->next=NULL;
      delete current;

    }


}

//to print a link list we need to traverse in it using intial pointer that is by head
void print(Node * &head)
{
   //we dont want to do any changes with head so
   Node * temp =head;
   while(temp!=NULL)
   {
    cout<<temp->data<<" ";
   temp= temp->next;
   }
   cout<<endl;

}

int main()
{    //creatd a new node
    Node * Node1= new Node(10);
    cout<<Node1->data<<endl;
    cout<<Node1->next<<endl;
    
    //pointing head to new node

    Node * head= Node1;
     ///pointing tail to new node
    Node * tail = Node1;

   // insert_at_head(head,12);
    // insert_at_head(head,15);
     insert_at_tail(tail,13);
     insert_at_tail(tail,23);
     insert_at_tail(tail,29);
     insert_at_tail(tail,11);
     inser_at_position(6,49,head,tail);
     print(head);
     deletionofnode(6,head,tail);
    print(head);
    cout<<"head is"<<head->data<<endl;
    cout<<"tail is "<<tail->data<<endl;

}
