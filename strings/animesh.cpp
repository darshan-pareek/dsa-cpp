#include<iostream>
#include<list>
#include<set>
#include<vector>
#include<stack>
#include<queue>
using namespace std;

/*
int main()
{
  
     
      string binary="";
      int p=130;
      int i=0;
      while(p!=0)
      { 
        binary=to_string(p & 1) + binary;
        p = p>>1;

      }
      cout<<endl<<binary;

        

cout<<endl<<endl;



      string binary1="";
      int a =8;
      int j=0;
      while(a!=0)
      {   cout<<to_string(a&1)<<" ";
         binary1=to_string(a&1) + binary1;
          a=a>>1;
         cout<<binary1<<endl;
      }
      cout<<binary1;

      pair<int,int>p1;
      p1.first=10;
      p1.second=11;
      cout<<p1.first<<" "<<p1.second<<endl;
     

      int arr[5]={8,9,1,2,3};
      int s=0;
      int e=4;
      while(s<e)
      {   int mid=(s+e)/2;
         if(arr[s]<arr[mid])
         s=mid+1;
         else
         e=mid;

      }
      cout<<arr[s]<<" "<<arr[e];
   

      cout<<endl;

      list<int> l;
      l.push_back(2);
      l.push_back(5);
      l.push_back(7);
      l.push_back(78);
    //  cout<<l[2];
      for(int i:l)
      cout<<i<<" ";
      auto it=l.begin();
      advance(it,3);
      l.insert(it,6);
      cout<<endl;
      for(int i:l)
      cout<<i<<" ";



      //set
      set<int> set1;
      set1.insert(5);
      set1.insert(7);
      set1.insert(17);
      set1.erase(set1.begin());



      // finding the count of prime number
      int n;
      cout<<"enrer the value of n  till you find prime no"<<endl;
      cin>>n;
      int count=0;
      vector<bool> isprime(n+1,1);
          isprime[0]=0;
          isprime[1]=0;
          for(int i=0;i<n;i++)
          {
            if(isprime[i])
            {  count++;
               for(int j=2*i;j<n;j=j+i)
               {
                  isprime[j]=0;
               }
            }
          }
          cout<<"total prime no is"<<count<<endl;



         // pointers
         void *p5;
         int nu=5;
         p5=&nu; 

         

   }


   */










   /*

int ispower(int a,int b)
{
    if(b==0)
    return 1;
    if(b==1) 
    return a;

    int ans= ispower(a,b/2);
    if(b%2==0){return ans*ans;}
    else{return  a*ans *ans;}





}

  void merge(vector<int>&v,int s,int mid,int e)
  {
   int left=s;
   int right =mid+1;
   vector<int> temp;
   while(left<=mid && right<=e)
   {
         if(v[left]<=v[right])
       {  temp.push_back(v[left]);
         left++;}
         else
      {   temp.push_back(v[right]);
         right++;}

   }
   while(left<=mid)
   temp.push_back(v[left++]);

   while(right<=e)
   temp.push_back(v[right++]);

   for(int i=s;i<=e;i++)
   v[i]=temp[i-s];



  }

   void ms(vector<int>&v,int s,int e)
   {
           if(s>=e) return ;
           
           int mid=(s+e)/2;

           ms(v,s,mid);
           ms(v,mid+1,e);
           merge(v,s,mid,e);

   }

   int main()
   {
      int  a;
      int b;
      cin>>a>>b;
      cout<<ispower(a,b);

      cout<<endl;
      vector<int> v={43,54,23,11,2,25};
      ms(v,0,v.size()-1);
      for(int i=0;i<v.size();i++)
      cout<<v[i]<<" ";
   }



   */



/*


   // link list

   class Node
   {   public:

      int data;
      Node * next;
      Node(int data)
      {
         this->data=data;
         this->next=NULL;
      }

      ~Node ()
      { 
         
           int value=this->data;
           if(this->next!=NULL)
           {
            delete next;
            this->next=NULL;

           }
           cout<< "value is deleted "<<value<<endl;
      }

   };

   void insert_at_head(Node * & head,int value)
   {
      Node * temp=new Node(value);
      temp->next=head;
      head =temp;
   }

   void insert_at_tail(Node * & tail,int value)
   {
      Node * temp=new Node(value);
      tail->next=temp;
      tail=temp;
   }

   void insert_at_position(Node * & head ,int value,int position)
   {
      Node * temp=new Node(value);
      Node * temphead=head;
     for(int i=1;i<position;i++)
     {
      temphead=temphead->next;
     }
     temp->next=temphead->next;
     temphead->next=temp;

   }


  void deletion(Node * &head,Node * & tail,int position)
  {
      if(position ==1)
      {
         Node * temp= head;
         head=head->next;
         temp->next=NULL;
         delete temp;
      }

      // any other position
      Node * current =head;
      Node * prev= NULL;
      int count=0;
      while(count<=position)
      {
         prev=current;
         current =current->next;
         count++;

      }
      prev->next=current->next;
      current->next=NULL;
      delete current;
      

  }


   void traverse(Node * &head)
   {
       Node * temp=head;
       while(temp != NULL)
       {
         cout<<temp->data<<" ";
         temp=temp->next;
       }
         cout<<endl;
   }


   int main()
   {
      Node * Node1= new Node(10);
      cout<<Node1->data<<" "<<Node1->next;



      Node * head =Node1;
      Node * tail =Node1;

      // insertion on head
      insert_at_head(head,12);
      insert_at_head(head,16);
      insert_at_head(head,11);
      insert_at_head(head,19);
      traverse(head);
      insert_at_tail(tail,21);
      insert_at_tail(tail,24);
      insert_at_tail(tail,27);
      insert_at_tail(tail,29);
       traverse(head);
       insert_at_position(head,45,3);
       insert_at_position(head,98,5);
       insert_at_position(head,77,2);
       traverse(head);
       deletion(head,tail,2);
       deletion(head,tail,4);
       traverse(head);




   }

*/

   



// doubly ll

/*

class Node 
{
   public :
   int data;
   Node * next;
   Node * prev;
   Node(int data)
   {
      this->data=data;
     this-> next=NULL;
     this-> prev=NULL;
   }

   ~Node()
   {
      int value=this->data;
      if(this->next!=NULL)
      {delete next;
      this->next=NULL;
      }
      cout<<"deleted value is "<<value<<endl;
   }
};


void insert_at_head(Node * &head,int data)
{
   Node * temp=new Node(data);
   temp->next=head;
   head->prev=temp;
   head=temp;

}

void insert_at_end(Node *&tail ,int data)
{
   Node * temp=new Node(data);
   tail->next=temp;
   temp->prev=tail;
   tail=temp;
}

void insert_at_pos(Node * & head ,int data ,int pos)
{
   Node * temp=new Node(data);
   Node * temppos=head;
   for(int i=0;i<pos;i++)
   temppos=temppos->next;

   temp->next=temppos->next;
   temppos->next->prev=temp;
   temp->prev=temppos;
   temppos->next=temp;

}


void traverse(Node * & head)
{   Node * temp=head;
   while(temp!=NULL)
   {
      cout<<temp->data<<" ";
      temp=temp->next;

   }
}

int main()
{
   
   Node * Node1=new Node(10);
   Node * head =Node1;
   Node * tail=Node1;
   insert_at_head(head,10);
     insert_at_head(head,12);
       insert_at_head(head,15);
         insert_at_head(head,18);

   traverse(head);

   


    
   
}



*/



// stack


/*
class Stack
{
    public :
    int top;
    int size;
    int * arr;
   
    Stack(int size)
    {
      this->size=size;
      top=-1;
      arr = new int(size);
    }

    // operations

    void push(int element)
    {
      if(top<size-1)
      {top++;
      arr[top]=element;
      }
      else
      cout<<"stackm is overfow";
    }
    int pop()
    {
      if(top>-1)
      {
         int element= arr[top];
         top--;
         return top;
      }
      else
      cout<<"stack is empty";
    }

    void traverse()
    {
      if(top<-1)
      cout<<"stack is empty ";
      else
      {
         for(int i=top;i>-1;i--)
            {
               cout<<arr[i]<<" ";
            }
      }
    }
     
    void peak()
    {
      if(top>-1 && top<size-1)
      cout<<arr[top];
    }

};

*/





// int main()
// {    /*
//    Stack obj(4);
//    obj.push(3);
//    obj.push(12);
//    obj.push(5);
//    obj.push(67);
//    obj.push(90);
//    obj.traverse();
//    obj.peak();
//    obj.pop();
//    obj.pop();
//    obj.traverse();

//    cout<<endl;

//                         */
//    // monotonic stack
//    vector<int > values={2,6,7,5,4,9};
//    stack<int > s;

//      vector<int > nextsmaller(values.size(),-1);
//    vector<int > result;
 
//    int n=values.size();
   
//    for(int i=n-1;i>=0;i++)
//    {
//       while (!s.empty() && s.top()>values[i])
//       {  
//          s.pop();
//       }
//       if(!s.empty())
//       nextsmaller[i]=s.top();
//       s.push(values[i]);
      
//    }
//    /*
//    while(!s.empty())
//    {  
//       result.insert(result.begin(),s.top());
//       s.pop();


//    }
//       */

//       for(auto i : result)
//       {
//          cout<<i<<" ";
//       }
//       cout<<endl;
//       for(auto i: nextsmaller)
//       cout<<i<<" ";
  
//    }












// Treeeee



class node
{  public:
    int data;
    node * left;
    node * right;

    node(int data)
    {
      this->data=data;
      this->left = NULL;
      this->right=NULL;
    }

};

node * buildtree(node * root)
{
   cout<<"enter the r value"<<endl;
   int data;
   cin>>data;
   root=new node(data);
   if(data==-1) return NULL;
   cout<<"enter the data for left side of "<<data<<endl;
   root->left =buildtree(root->left);

   cout<<"enter the data of right side of "<<data<<endl;
   root->right= buildtree(root->right);

   return root;


}


node * level_order_traversing(node * root)
{
   queue<node * > q;
   q.push(root);
   q.push(NULL);
   while(!q.empty())
   {
      node * temp=q.front();
      q.pop();


    if(temp==NULL)
    {  cout<<endl;
      if(!q.empty())
      q.push(NULL);
    }


      else{
      cout<<temp->data;

      if(temp->left)
      {
         q.push(temp->left);
      }
      if(temp->right)
      {
         q.push(temp->right);
      }}
   }

}


void inorder(node * root)
{
   if(root==NULL)
   return ;
   inorder(root->left);
   cout<<root->data<<" ";
   inorder(root->right);

}

void preorder(node * root)
{
   if(root==NULL)
   {
      return ;
   }
   cout<<root->data<<" ";
   preorder(root->left);
   preorder(root->right);
}
void postorder(node * root)
{
   if(root==NULL)
   return;
   postorder(root->left);
   postorder(root->right);
   cout<<root->data<<" ";
}


void build_from_levelorder(node * &root)
{
   queue<node *> q;
   cout<<"enter the data of root";
   int data;
   cin>>data;
   root=new node(data);
   q.push(root);
   while(!q.empty())
   {
      node * temp =q.front();
      q.pop();
      cout<<"enter the left node of "<<temp->data<<"  ";
      int left;
      cin>>left;
      if(left!=-1)
      {  temp->left=new node (left);
         q.push(temp->left);
      }
      cout<<"enter the right node of "<<temp->data<<"  ";
      int right;
      cin>>right;
      if(right!=-1)
      {  temp->right=new node (right);
         q.push(temp->right);
      }
   }

}

int main()
{
   node * obj=new node(15);
   node * root =NULL;
   root=buildtree(root);
  level_order_traversing(root);
   cout <<endl;
   preorder(root);
   cout<<endl;
   inorder(root);
   cout<<endl;
   postorder(root);
   cout<<endl;
    
   cout<<endl;
   build_from_levelorder(root);
   level_order_traversing(root);
}