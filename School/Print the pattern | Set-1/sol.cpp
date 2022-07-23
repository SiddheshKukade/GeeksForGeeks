//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
void printPat(int n);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n;
	cin>>n;
    printPat(n);
    cout<<endl;
	}
}
// } Driver Code Ends


/*You are required to complete this method*/
void printPat(int n)
{
    //line no 
    for(int i= n ; i>0 ; i--){
      
    // print the pattern j prints numbers
        for(int j=n ; j>0; j--){
            int temp =i;
            // while repeats the numbers
            while(temp>0){
            cout<<j<<" ";
            temp--;
            }
            
        }
            cout<<"$";
    }



}
