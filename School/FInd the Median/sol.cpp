class Solution {
  public:
    public:
    int find_median(vector < int > v) {
      //  //sorting the array
      sort(v.begin(), v.end());
      //check if no even or odd
      int size = v.size();
      if (size % 2 != 0) {
        //size is odd
        return v[(size) / 2]; //here for odd return the middle 
      }
      //even
      return (v[(size - 1) / 2] + v[(size / 2)]) / 2;
    }
};
