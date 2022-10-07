
class Solution
{
    public:
    void flatten(Node *root)
    {
        Node* cur = root;
        while(cur ){ // untill curent pointer is valid
            if(cur->left){ // if left is present
                Node* pre = cur->left;
                /*
                converting all the lefts  into right directions
                * traverse all the way in right
                once on right then set a new root at right of that ele
                and move head to the left direction.
                set the left as null
                */
                // travel all the way in right 
                while(pre->right){
                    pre=pre->right;
                }
                // now current right is set to traversed''s right
                pre->right = cur->right ;
                // making currleft  as  right
                cur->right = cur->left;
                // finally making the left nullx
                cur->left = NULL;
            }
            cur = cur->right;
        }
        }
};
