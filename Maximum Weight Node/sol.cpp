class Solution
{
  public:
  int maxWeightCell(int N, vector<int> Edge)
  {
      unordered_map<int,int> mp; //<ele, weight>
      for(int i=0; i<N;i++){
          mp[i]=0;
      }
      for(int i=0;i<N;i++){
          if(Edge[i]!=-1){ 
              mp[Edge[i]] += i; // just keep adding those edges who are redirecting to that number
          }
      }
      int ans =-1;
      int max_weight=INT_MIN;
      for(auto ele:mp){
          if(ele.second >max_weight){ // if greater weight is found
              ans = ele.first;
              max_weight=ele.second;
          }
          else if (ele.second == max_weight){ // if same weight are there
              ans = max(ans,ele.first);
          }
      }
      return ans;
  }
};
