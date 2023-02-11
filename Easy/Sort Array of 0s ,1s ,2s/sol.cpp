class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int one=0;
        int two=0;
        int zero=0;
        for(int i=0; i<n;i++){
           if(a[i] ==1 ) one ++;
           if(a[i] ==0 ) zero++;
           if(a[i] ==2 ) two ++;
        }
        int counter=0;
        for(int i=0; i<zero;i++){
          a[counter] = 0;
          counter++;
        }
        for(int i=0; i<one;i++){
          a[counter] = 1;
          counter++;
        }
       for(int i=0; i<two;i++){
          a[counter] = 2;
          counter++;
        }
    }
};
