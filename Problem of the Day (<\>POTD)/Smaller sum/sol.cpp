//User function Template for C++
class Solution{
public:
    int bs(int key, int temp[], int n){
           int low=0, high=n-1, mid=0,index=-1;
        while(low<=high){
            mid= (low+high)/2;
            if(temp[mid] == key){
                index=mid;
                high = mid-1; // checking left
            }
            else if(temp[mid]>key){ //smaller key
                high= mid-1;
            }
            else low=mid+1;
        }
        return index; // return the found idx
    }
    vector<long long> smallerSum(int n,vector<int> &arr){
        vector<long long> ans(n);
        long long sum[n];
        int temp[n];
	   for(int i=0;i<n;i++)temp[i]=arr[i];
        sort(temp,temp+n);
        sum[0]=temp[0];
        for(int i=1;i<n;i++)sum[i]=sum[i-1]+temp[i];
        for(int i=0;i<n;i++){
            int index = bs(arr[i],temp,n);
            ans[i] = sum[index]-arr[i];
        }
        return ans;
    }
    
};
