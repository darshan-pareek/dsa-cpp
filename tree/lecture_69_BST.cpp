#include<iostream>
#include<queue>
using  namespace std;

class Node
{
   public:
   int data;
   Node * left;
   Node * right;
   Node(int data)
   {
    this->data=data;
    this->left=NULL;
    this->right=NULL;
   }

};
Node * minvalue(Node * root )
{    Node * temp= root;
   while(temp->left)
       temp=temp->left;
     //  cout<<temp->data<<" ";
       return temp;
}

Node * maxvalue(Node * root )
{    Node * temp= root;
   while(temp->right)
       temp=temp->right;
       return temp;
}

Node * deleterfrombst(Node * root, int value)
{

    if(root==NULL)
    return root;
    if(root->data==value)
    {
        //0 child
  
        if(root->left ==NULL && root->right==NULL)
         { 
           delete root;
           return NULL;
         }
         //2 child
         if (root->left !=NULL && root->right!=NULL)
         {
           int mini= minvalue(root->right)->data;
           root->data=mini;
           root->right=deleterfrombst(root->right,mini);
           return root;
         }
         //1 child
         if (root->left!=NULL && root->right==NULL)
         {
            Node * temp= root->left;
            delete root;
            return temp;


         }
      if(root->left==NULL && root->right!=NULL)
      {
        Node * temp=root->right;
        delete root;
        return temp;
      }

     
    }
    else if(root->data>value)
    {
         root ->left=  deleterfrombst(root->left,value);
         return root;


    }
    else
 {       root->right=deleterfrombst(root->right,value);
        return root;
}

  }

    
   void inorder_ps(Node * root,int value)
   {   
       if(root->data==value)
       {cout<<"precesdor is: "<<maxvalue(root->left)->data;
       cout<<"succesor is " <<minvalue(root->right)->data;
       }
       else if (root->data>value)
       {
          inorder_ps(root->left,value);

       }
       else
       inorder_ps(root->right,value);
       



   }

   void inorder(Node * root)
   {
          if(root==NULL)
          return;

          inorder(root->left);
          cout<<root->data<<" ";
          inorder(root->right);



   }



Node * leve_order_traversing(Node * root)
{
    queue<Node * > q;
    //inserting the first or root node in queue
    q.push(root);
  // we kow for level 0 only root node there so we push null and by this we separe the level 0
    q.push(NULL);

    while(!q.empty())
    {
            Node * temp = q.front();
         
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

Node * insertintobst(Node * root,int data)
{
    if(root==NULL)
    {
        root=new Node(data);
        return root;
    }

    if(data>root->data)
    {
        root->right=insertintobst(root->right,data);
    }
    else
    root->left=insertintobst(root->left,data);
    return root;


}
void takeinput(Node * & root)
{
   int data;
   cin>>data;
   while(data!=-1)
   {
           root= insertintobst(root,data);
         cin>>data;
     

   }

}


int main()
{   Node * root=NULL;
    cout<<"enter data in bst";

    takeinput(root);
    cout<<"printing bst "<<endl;
    leve_order_traversing(root);
    cout<<endl<<minvalue(root)->data<<endl;
    cout<<"inorder traversing of bst is"<<endl;
    inorder(root);
  //  cout<<endl<<"enter the data for inorder precedor and succesor"<<endl;
 //   int value;
 //   cin>>value;
  //  inorder_ps(root,value);
    cout<<endl<<"enter the node to  delete"<<endl;
    
   root = deleterfrombst(root,3);
       leve_order_traversing(root);

    

}