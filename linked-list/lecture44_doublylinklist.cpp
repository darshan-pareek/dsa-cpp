#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
    Node *previous;

    Node(int data)
    {
       this->data=data;
       this->next=NULL;
       this->previous=NULL;


    }
    ~Node()
    {
         int value= this->data;
         if(this->next!=NULL)
         {
          delete next;
          next=NULL;
         }
         cout<<"memory is free by distroctor and deleted value is:"<<value<<endl;

    }
};

void insertionathead(Node * &head,int data)
{
   Node * temp= new Node(data);
   temp->next=head;
   head->previous=temp;
   head=temp;

}


void insertattail(Node *&tail,int data)
{ 
  Node *temp= new Node(data);
  tail->next=temp;
  temp->previous=tail;
  tail=temp;

}

void insertatposition(Node * &head,Node *&tail,int data,int position)
{
   Node * temp=new Node(data);
   int count=1;
   Node * temp1=head;
   if(position==1)
   {
    insertionathead(head,data);
    return ;
   }
   else
   {
    while(count<position-1)
    {  

      temp1=temp1->next;
      count++;

    }
    if(temp1->next==NULL)
    {
      insertattail(tail,data);
      return;
    }
    
    temp->next=temp1->next;
    temp1->next->previous=temp;
    temp1->next=temp;
    temp->previous=temp1;


   }

}

void deletionofnode(Node * &head,Node * &tail,int position)
{
  if(position==1)
  {  Node * temp=head;
  head=head->next;
   temp->next->previous=NULL;
   temp->next=NULL;
   delete temp;

  }
  else
  {
    Node *temp1=head;
    Node *temp2=NULL;
    int cnt=1;
    while(cnt<position)
    {
      temp2=temp1;
      temp1=temp1->next;
      cnt++;
    }
    if(temp1->next!=NULL)
    {
       temp1->next->previous=temp2;
    }
    temp2->next=temp1->next;
    tail=temp2;
    
   // temp1->next->previous=temp2;
    temp1->next=NULL;
    temp1->previous=NULL;
    delete temp1;

  }


}
void print(Node * &head)
{
  Node * temp =head;
  while(temp!=NULL)
  {cout<<temp->data<<" ";
    temp=temp->next;
  }
  cout<<endl;
}


int main()
{
    Node *node1= new Node(10);
    cout<<node1->data<<endl;
    cout<<node1->next<<endl;
    cout<<node1->previous<<endl;

    Node *head=node1;
    Node *tail= node1;

    insertattail(tail,15);
     insertattail(tail,24);
    insertattail(tail,38);
     insertattail(tail,95);
     print(head);
     insertatposition(head,tail,44,6);
                print(head);
   
       deletionofnode(head,tail,6);
       cout<<"head is "<<head->data<<endl;
       cout<<"tail is "<<tail->data<<endl;

     print(head);

}