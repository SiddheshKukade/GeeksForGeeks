
class Solution{   
public:
    int minimumStep(int n){
        //complete the function here
        int steps =0;
        int ans = 0;
        int i =n;
             while(i>1){

            if(i%3==0){

                i=i/3;

                steps++;

            }

            else{

                i--;

                steps++;

            }

        }
       return steps; 
    }
};
