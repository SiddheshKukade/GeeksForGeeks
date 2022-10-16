class Solution
{
    public:
    // Function to check if Kth bit is set or not.
    bool checkKthBit(int n, int k)
    {
        // Your code here
        // It can be a one liner logic!! Think of it!!
        //and AND operation with 1 i.e 001 can tell us the answer
        return (n&(1<<k))? true :false;
    }
};
