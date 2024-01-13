#include <bits/stdc++.h>
using namespace std;

class trienode
{
public:
    char data;
    trienode *children[26]; // 26 alphabet
    bool isterminal;
    trienode(char ch)
    {
        data = ch;
        for (int i = 0; i < 26; i++)
        {
            children[i] = NULL;
        }
        isterminal = false;
    }
};

class trie
{
public:
    trienode *root;
    trie(){
        root=new trienode('\0');
    }
    void insertutil(trienode *root, string word)
    {
        if (word.length() == 0)
        {
            root->isterminal = true;return;
        }
        int index = word[0] - 'a';
        trienode *child;
        // if present
        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }
        // if absent
        else
        {
            child = new trienode(word[0]);
            root->children[index] = child;
        }
        insertutil(child, word.substr(1));
    }
    void insertword(string word)
    {
        insertutil(root, word);
    }


bool searchutil(trienode*root,string word){
if (word.length() == 0)
        {
            return root->isterminal;
        }
        int index = word[0] - 'a';
        trienode *child;
        // if present
        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }
        // if absent
        else
        {
           return false;
        }
      return searchutil(child,word.substr(1));
}
bool search(string word){
    return searchutil(root,word);
}


};

int main()
{
    trie*t=new trie();
    t->insertword("abhay");
   
    cout<<t->search("ha");
}