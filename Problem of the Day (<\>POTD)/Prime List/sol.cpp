

class Solution{
public:
    Node *primeList(Node *head){
         vector<bool> isprime(10011,1);
        isprime[0]=isprime[1]=0;
        for(int i=2;i*i<=10010;i++)
        {
            if(isprime[i])
            {
                for(int j=2*i;j<=10010;j+=i)
                {
                    isprime[j]=0;
                }
            }
        }
        Node* curr=head;
        while(curr)
        {
            int currdat=curr->val;
            if(currdat==1)
            {
                curr->val=2;
            }
            else if(isprime[currdat])
            {
                 
            }
            else
            {
                int currdatleft=currdat;
                while(!isprime[currdatleft])
                {
                    currdatleft--;
                }
                int currdatright=currdat;
                while(!isprime[currdatright])
                {
                    currdatright++;
                }
                int ldiff=abs(currdat-currdatleft);
                int rdiff=abs(currdat-currdatright);
                if(ldiff<=rdiff)
                {
                    curr->val=currdatleft;
                }
                else
                {
                    curr->val=currdatright;
                }
            }
            curr=curr->next;
        }
        return head;
    }
};
