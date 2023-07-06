#define CHILDREN 26

class TrieNode
{
public:
    TrieNode* children[CHILDREN];
    bool isLeaf;
    char data;
    
    TrieNode(char ch)
    {
        data = ch;
        for(int i = 0; i < CHILDREN; i++)
        {
            children[i] = nullptr;
        }
        isLeaf = false;
    }
};

void insert(TrieNode *root, string key)
{
    if(key.length() == 0)
    {
        root->isLeaf = true;
        return;
    }
    
    int first = key[0] - 'a';
    TrieNode* child;
    
    if(root->children[first])
    {
        child = root->children[first];
        root->isLeaf = true;
    }
    else
    {
        child = new TrieNode(key[0]);
        root->children[first] = child;
        root->isLeaf = true;
    }
    
    insert(child, key.substr(1));
}

bool search(TrieNode *root, string key)
{
    if(key.length() == 0)
    {
        return root->isLeaf;
    }
    
    int first = key[0] - 'a';
    
    if(root->children[first])
    {
        return search(root->children[first], key.substr(1));
    }
    else
    {
        return false;
    }
}



class Solution{
    
public:
void helper(TrieNode *root, string temp, vector<vector<string> > &ans, set<string> contact, int n)
    {
        vector<string> temp1;
        // set<string> temp1;
        vector<string> zero = {"0"};
        if(search(root, temp))
        {
            for(auto cntc: contact)
            {
                if(temp == cntc.substr(0, temp.length()))
                {
                    temp1.push_back(cntc);
                }
            }
            ans.push_back(temp1);
        }
        else ans.push_back(zero);
        
    }
    vector<vector<string>> displayContacts(int n, string contact[], string s)
    {
        // code here
        ///provide output for each charater in string s assuming that user is typing s char by char
        TrieNode* root = new TrieNode('\0');
        
        for(int i = 0; i < n; i++)
        {
            insert(root, contact[i]);
        }
        
        vector<vector<string>> ans;
        string temp = "";
        
        set<string> contact_srted;
        for(int i = 0; i < n; i++)
        {
            contact_srted.insert(contact[i]);
        }
        
        for(int i = 0; i < s.length(); i++)
        {
            // cout<<"hey";
            temp += s[i];
            helper(root, temp, ans, contact_srted, n);
        }
        
        return ans;
    }
};
