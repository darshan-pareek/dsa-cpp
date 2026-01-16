#include<iostream>
using namespace std;

class TrieNode
{
    public:
    char data;
    TrieNode * children[26];
    bool isTerminal ;

    TrieNode(char dt)
    {
        data=dt;
        for(int i=0;i<26;i++)
        children[i]=NULL;
        isTerminal = false; 
    }
};

class Tries
{
    public:
    TrieNode * root;
    // to create root as a node
    Tries ()
    {  // '\0' means we creating root with null value
        root= new TrieNode('\0');
    }
    void insertutil(TrieNode * root, string word)
    {
        //base case
        if(word.length()==0)
        {
           root->isTerminal = true;
           return;
        }

        //assumption word in capital
        int index = word[0]-'A';
        TrieNode * child ;

        //present
        if(root->children[index]!=NULL)
        {
            child = root->children[index];
        } 
        else
        {//absent
         
         child = new TrieNode(word[0]);
         root->children[index]=child;

        }
        // recursion
        insertutil(child,word.substr(1));

    }
 
    void insertword(string word)
    {  // to implement recursion we use this util function
        insertutil(root,word);

    }
    bool searchutil(TrieNode * root,string word)
    {    // base case
        if(word.length()==0)
        return root->isTerminal;

 
  //assumption word in capital
        int index = word[0]-'A';
        TrieNode * child ;

        if(root->children[index]!=NULL)
        {
            // this mean char is present in the ties
            child = root->children[index];
        }
        else
        {
            //char is nit present in trie so return false
            return false; 
        }

        return searchutil(child , word.substr(1));


    }

    bool search(string word)
    {
        return searchutil(root,word);
    }

      void removeutil(TrieNode * root,string word)
      {
         // base case
        if(word.length()==0)
        { root->isTerminal = false;
         return;
        }
          int index = word[0]-'A';
        TrieNode * child ;

        
        if(root->children[index]!=NULL)
        {
            child = root->children[index];
        }

         removeutil(child,word.substr(1));
      }

    void removeword(string word)
    {
        removeutil(root,word);
    }
};

int main()
{
  Tries * t =new Tries();
  t->insertword("ABC");
   t->insertword("ARM");
    t->insertword("DO");
     t->insertword("TIME");
      t->insertword("TIS");
      
    t->removeword("TIS");
  cout<<"word present or not: " <<t->search("TIS")<<endl;
}
