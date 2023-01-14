//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
// class Solution{
// public:
    // int solve(vector<int> &Queries, vector<long,long> &sum, vector<vector<int>> &arr, unordered_map<int ,int> new_ind ){
//         long long val= Queries[0]; // total amount
//         int cnt =0; // 
//         int s =0;
//         int e= sum.size()-1;
//         while(s<=e){
//             int mid = s+(e-s)/2;
//             if(sum[mid]<=val){
//                 cnt= mid+1;  // contains how much toys that we can buy with curent amount
//                 s=mid+1;
//             }
//             else e = mid + 1; 
//         }
//         int ans=0;
//         unordered_set<int> st;
//         long long cur_sum = val-sum[cnt-1];
//         for(int i=2; i<Queries.size();i++){
//             if(new_ind[Queries[i]] <=cnt){// if we can buy the items
//                 cur_sum += arr[new_ind[Queries[i]]-1][0];
//                 ans--; // reduce the number of ans
//             }
//             st.insert(new_ind[Queries[i]-1][0]);
//         }
//         for(int i=cnt;i<arr.size();i++){
//             if(arr[i][0]>cur_sum)break;
//             if(st.count[i+1]) continue;
//             ans++;
//             cur_sum = arr[i][0];
//         }
//         return ans+cnt;
//     }
//   vector<int> maximumToys(int N,vector<int> A,int Q,vector<vector<int>> Queries){
//       // code here
//       //cost of toy => it's serial number
//       vector<vector<int>> arr;
//       for(int i=0; i<A.size(); i++){
//           arr.push_back({A[i] , i});
//       }
//       sort(arr.begin(), arr.end());
      
//       unordered_map<int,int> new_ind;
//       vector<long long> pre_sum;
//       pre_sum[0] = arr[0][0];
//       new_ind[arr[0][1]+1] =1; // updating the index positions with arr
//       for(int i=1; i<N; i++){ // calculating max sum until that element
//           pre_sum[i]=pre_sum[i-1]+arr[i][0];
//           new_ind[arr[i][1]+1] = i+1;
//       }
//       vector<int> ans (Queries.size());
//       for(int i=0; i<Queries.size; i++){
//           int cnt = solve(Queries[i],pre_sum, arr,new_ind);
//           ans[i] = cnt;
//       }
    //   return ans;
//   }
// };

const int N=1e6+5;
int fr[N];
class tree{
public:
  vector<long long> bit;
  tree(){
    bit=vector<long long>(N);
  }
  void add(int node,int v)
  {
     for(;node<N;node+=(node&(-node)))
      bit[node]+=v;
  }
  long long get(int node)
  {
    long long x=0;
    for(;node>0;node-=(node&(-node)))
      x+=bit[node];
    return x;
  }
};
tree obj1,obj2;


class Solution{
public:
  vector<int> maximumToys(int N,vector<int> A,int Q,vector<vector<int>> Queries){
    vector<int> res;

    for(auto i:A){
      fr[i]++;
    }

    for(int i=0;i<A.size();i++){
      obj1.add(A[i],A[i]);
      obj2.add(A[i],1);
    }
    for(auto i:Queries){
      long long C=i[0];
      for(int j=2;j<i.size();j++){
        obj1.add(A[i[j]-1],-A[i[j]-1]);
        obj2.add(A[i[j]-1],-1);
      }
      long long lw=1,hg=1e6;
      long long pos=1e6;
      while(lw<=hg){
        int mid=(lw+hg)/2;
        if(obj1.get(mid)>=C){
          pos=mid;
          hg=mid-1;
        }
        else{
          lw=mid+1;
        }
      }

      long long ans=obj2.get(pos-1);
      long long mx=min((C-obj1.get(pos-1))/pos,(long long)fr[pos]);
      ans+=mx;
      res.push_back(ans);
      for(int j=2;j<i.size();j++){
        obj1.add(A[i[j]-1],A[i[j]-1]);
        obj2.add(A[i[j]-1],1);
      }
    }
    for(int i=0;i<A.size();i++){
      obj1.add(A[i],-A[i]);
      obj2.add(A[i],-1);
      fr[A[i]]--;
    }
    return res;
  }
};
