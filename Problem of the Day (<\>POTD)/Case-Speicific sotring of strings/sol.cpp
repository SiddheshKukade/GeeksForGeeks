 class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int nn)
    {
        // Seperately sor Uppercase and Lowercase character with sequence of XYZ and Concatenate the answer
        // if ASCII is greater than 97 then it is Capital Lettere
        // make two list for lower and upper case 
        // store the lower and uppercase elements accordingly
        //sort the lower and uppercase List
        // traverser the annswer and the replace the given case with our case of answer
        vector<char> a ; // to store uppercase 
        vector <char> b; //to store lowercase
        
        for(int i=0; i<str.size(); i++){
            if(int(str[i]) >=97){
                a.push_back(str[i]);
            }else{
                b.push_back(str[i]);
            }
            }
            //sorting the answers
            sort(a.begin(), a.end());
            sort(b.begin(), b.end());
      
            int m=0; 
            int n=0;
             
        for(int i=0; i<str.size(); i++){
            if(int(str[i]) >= 97){
                str[i] = a[m]; //replace it with our capital answer
                m++; // incrementing the m for uppercase
            }else{
                str[i] = b[n]; // replace with our lower case answer
                n++; // increment n for lowercse
            }
        }
       
        
         return str;
    }
};
