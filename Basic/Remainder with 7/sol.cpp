class Solution{
    public:
    /*You are required to complete this method */
    int remainderWith7(string s)
    {
        // long long int no= stoi(n);
        int num = 0; 
    for(int i = 0; i < s.length(); i++){
        num = num * 10 + s[i] - '0';
        num%=7;
    }
      return num;
    }
};
