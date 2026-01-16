/*
#include<iostream>
#include<queue>
using namespace std;

class node {
  public:
   int data;
   node * left;
   node * right;
   node(int data)
   {
     this->data=data;
     this->left=NULL;
     this->right=NULL;


   }

};

node * build_tree(node * root)
{  
   cout<<"enter the data"<<endl;
    int data;
   cin>>data;
   root= new node(data);

   if (data==-1)
   {
    return NULL;
   }
   cout<<"enter the data for left side of "<<data<<endl;
    root->left=build_tree(root->left);
       cout<<"enter the data for right side of "<<data<<endl;
    root->right=build_tree(root->right);
    return root;


}

void level_order_travesrsing(node * root)
{  
    queue<node *>  q;

    q.push(root);

     q.push(NULL);

    while (!q.empty())
    {
       node * temp=q.front();
       q.pop();
       if (temp==NULL)
      {
          cout<<endl;
          if (!q.empty())
          {
            q.push(NULL);
          }


      }
      else
      {
       cout<<temp->data<<" ";
       if(temp->left)
       {
        q.push(temp->left);
       }
       if(temp->right)
       {
        q.push(temp->right);
       }
      }

    }
    
   

}
void inorder(node * root)
{  
    
    if (root==NULL)
    {
        return ;
    }
    
    inorder(root->left);
    cout<<root->data<<' ';
    inorder(root->right);
}
void preorder(node * root )
{
    if (root == NULL)
    {
        return ;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);

}

void Build_From_level_Order(node * root)
{
   queue<node *>q;
   cout<<"enter the data for root"<<endl;
   int data;
   cin>>data;
   root=new node(data);
   q.push(root);
   while(!q.empty())
   {
    node * temp = q.front();
    q.pop();
    cout<<"enter te left data for "<<temp->data<<" ";
    int leftdata;
    cin>>leftdata;
    if(leftdata!=-1)
    {
        temp->left= new node (leftdata);
        q.push(temp->left);
    }
    cout<<"enter the right data for"<<temp->data<<" ";
    int rightdata;
    cin>>rightdata;
    if(rightdata!=-1)
    {
        temp->right=new node(rightdata);
        q.push(temp->right);
    }


   }

}

int main()
{
 /* node * root=NULL;
 root= build_tree(root);
  level_order_travesrsing(root);
  cout<<endl;
 cout<<"inorder traversing is"<<endl;
  inorder(root);
  
 node *root=NULL;
 Build_From_level_Order(root);
  return 0;

}

*/


#include<iostream>
#include<queue>
using namespace std;

class node
{ 
    public:
    int data;
    node * left;
    node * right;
    node(int data)
    {
       this->data=data;
       this->left=NULL;
       this->right=NULL;

    }


};

node * Build_Tree(node * root)
{
   cout<<"enter the data"<<endl;
   int data;
   cin>>data;
   if(data==-1)
   {
    return NULL;
   }
   root= new node(data);

   cout<<"enter the data for left side of"<<data<<endl;
   root->left=Build_Tree(root->left);
   cout<<"enter the data for right side of "<<data<<endl;
   root->right=Build_Tree(root->right);

   return root;



}

void Traversing(node * root)
{

  queue <node *> q;
  q.push(root);
  q.push(NULL);
 
  while (!q.empty())
{  node * temp=q.front();
  q.pop();
   
    if (temp==NULL)
    { 
        cout<<endl;
         if(!q.empty())
         {
            q.push(NULL);

         }

    }
    
    else{
         cout<<temp->data<<" ";
  
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

void Build_From_levelorder(node * root)
{
    cout<<"enter the data for root";
    int data;
    cin>>data;
    queue <node * > q;
    root = new node (data);
    q.push(root);
    while(!q.empty())
    {
        node * temp = q.front();
        q.pop();

        cout<<"enter the left side data for"<<temp->data<<endl;
        int leftdata;
        cin>>leftdata;
    
        if(leftdata!=-1)
        {
            temp->left=new node(leftdata);
            q.push(temp->left);

        }
        cout<<"enter the right side data for"<<temp->data<<endl;
        int rightdata;
        cin>>rightdata;
        if(rightdata!=-1)
        {
            temp->right=new node(rightdata);
            q.push(temp->right);
        
            
        }

    }

}
int main()
{
    node * root;

  //  root=Build_Tree(root);
  Build_From_levelorder(root);
      Traversing(root);

}