#include<iostream>
#include<queue>
#include<stack>
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
   root = new node(data);
   if(data==-1)
   {
    return NULL;
   }
   cout<<"enter the  data inserting in left of "<<data<<endl;
   root->left=Build_Tree(root->left);
   cout<<"enter the data for inserting in right of"<<data<<endl;
   root->right=Build_Tree(root->right);
   return root;
}
node * leve_order_traversing(node * root)
{
    queue<node * > q;
    //inserting the first or root node in queue
    q.push(root);
  // we kow for level 0 only root node there so we push null and by this we separe the level 0
    q.push(NULL);

    while(!q.empty())
    {
            node * temp = q.front();
         
            q.pop();
            
            if(temp == NULL)
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

node * reverse_leve_order_traversing(node * root)
{
    queue<node * > q;
    stack<node *> s;
    //inserting the first or root node in queue
    q.push(root);
  // we kow for level 0 only root node there so we push null and by this we separe the level 0
   

    while(!q.empty())
    {
            node * temp = q.front();
         
            q.pop();
            s.push(temp);
          
        
              if(temp->left)
            { 
                q.push(temp->left);

            }
            if(temp->right)
            {
                q.push(temp->right);
            }
    }
         
         while(!s.empty())
         {
            cout<<s.top()->data<<' ';
            s.pop();
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
   //cout<<root->data<<' ';

}
void preorder(node * root)
{   
   if (root==NULL)
   {
    return ;
   }
     cout<<root->data<<' ';
   preorder(root->left);
   preorder(root->right);
   

}


void postorder(node * root)
{   
   if (root==NULL)
   {
    return ;
   }
    
   postorder(root->left);
   postorder(root->right);
    cout<<root->data<<' ';

}

void build_from_levelorder(node * &root)
{
   queue<node *>q ;
   cout<<"enter the data for root";
   int data;
   cin>>data;
   root = new node(data);
   q.push(root);
   while (!q.empty())
   {
    node * temp =  q.front();
    q.pop();
    cout<<"enter the left node for "<<temp->data<<endl;
    int leftdata;
    cin>>leftdata;
    if(leftdata!=-1)
    {
        temp->left=new node(leftdata);
        q.push(temp->left);
    }
    cout<<"enter the right node for "<<temp->data<<endl;
    int rightdata;
    cin>>rightdata;
    if(rightdata!=-1)
    {
        temp->right=new node(rightdata);
        q.push(temp->right);
    }
   }
   

}




int main ()
{
  node *root =NULL;
 
  root= Build_Tree(root);
 cout<< "level of traversing is"<<endl;
  
  leve_order_traversing(root);
  cout<<endl;
 /*
  cout<<" reverse order traversing is"<<endl;
  reverse_leve_order_traversing(root);
  cout<<endl;

  cout<<"inorder traversing is"<<endl;
  inorder(root);

cout<<endl;
  cout<<"preorder traversing is"<<endl;
  preorder(root);
  cout<<endl;
  
  cout<<"postorder traversing is"<<endl;
  postorder(root);
  */
//  build_from_levelorder(root);

}