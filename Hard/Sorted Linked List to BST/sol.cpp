class Solution{
  public:
    TNode* sortedListToBST(LNode *head) {
        vector<int> v;// containsall the nodes from the lisnt 
        int count =0;
        while(head){
            v.push_back(head->data);
            head =head->next;
            count++; // total no of items;
        }
        int start=0;
        int end= count -1;
        return bst(v,start,end);
    }
    TNode* bst(vector<int> &v, int s , int e){
        if(s>e)return NULL; // we have traversed the list completely.
        int m = (s+(e+1))/2; // middle value
        TNode* temp = new TNode(v[m]); // insert the middle element
        temp->left = bst(v,s,m-1); // left side list 
        temp->right = bst(v,m+1, e); // right side list 
        return temp;
    }   
};
