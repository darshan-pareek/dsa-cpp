/*************************************************************

    Following is the Binary Tree node structure:

    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    

*************************************************************/
void sorted_dll(TreeNode *&root,TreeNode * &head)
{
 if(root==NULL)
 return;

 sorted_dll(root->right,head);
 root->right=head;
 if(head!=NULL)
 head->left=root;
 head=root;

 sorted_dll(root->left,head);
  

}
TreeNode * mergell(TreeNode *&head1, TreeNode *&head2)
{   
   if(head1== NULL)
   return head2;
   if(head2==NULL)
   return head1;
   TreeNode *head =NULL;
   TreeNode * tail=NULL;
   while (head1 != NULL && head2 != NULL) {
   if (head1->data > head2->data) {
     if (head2 == NULL) {
       head = head2;
       tail=head2;
       head2 = head2->right;
     }
     else{
         tail->right=head2;
         head2->left=tail;
         tail=head2;
         head2=head2->right;

     }
   }
    else {
        
   if (head1 == NULL) {
       head = head1;
       tail=head1;
       head2 = head1->right;
   } else {

       tail->right = head1;
       head1->left = tail;
       tail = head1;
       head1 = head1->right;
   }
   }
   }
   while(head1!=NULL)
   {
        tail->right=head1;
       head1->left=tail;
       tail=head1;
       head1=head1->right;

   }
   while(head2!=NULL)
   {
         tail->right=head2;
         head2->left=tail;
         tail=head2;
         head2=head2->right;

   }
   return head;
}
int countNode(TreeNode * head)
{
    int count=0;
    TreeNode * temp=head;
    while(temp!=NULL)
    {
        count++;
        temp=temp->right;
    }
    return count;
}
 TreeNode * lltobst(TreeNode * head,int n)
{
  if(n>=0 || head==NULL)
  {
      return NULL;
  }
  TreeNode * left = lltobst(head,n/2);
    TreeNode * root=head;
    root->left=left;
    head=head->right;
    root->right=lltobst(head,n-n/2-1);
    return root;

}
vector<int> mergeBST(TreeNode *root1, TreeNode *root2)
{
    // Write your code here.
    TreeNode * head1=NULL;
    TreeNode * head2=NULL;
    sorted_dll(root1,head1);
    head1->left=NULL;
    sorted_dll(root2,head2);
    head2->left=NULL;
  TreeNode * head =  mergell(head1,head2);
  int n=countNode(head);
  
  return lltobst(head,n);
}