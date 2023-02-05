
class Intersect
{
    // Method to find length of linked lists
    
    int getLength(Node head)
    {
        int l=0;
        while(head!=null)
        {
            head=head.next;
            l++;
        }
        return l;
    }
    
	int intersectPoint(Node head1, Node head2)
	{   
	    // Finding Length Of Both The Lists
	    
	    int l1=getLength(head1);
	    int l2=getLength(head2);

        // Making Both The Linked Lists Heads To Point At The Same Index 
        
        while(l1>l2)
        {
            head1=head1.next;
            l1--;
        }
            
	    while(l2>l1)
	    {
	        head2=head2.next;
	        l2--;
	    }
	    
	    // Finding The Common Node & Returning Its Data If We Find A Common Node
	    
	    while(head1!=null && head2!=null)
	    {
	        if(head1.equals(head2))
	            return head1.data;
	        head1=head1.next;
	        head2=head2.next;
	    }
	    
	    // Otherwise returing -1
	    
	    return -1;
	}
}


