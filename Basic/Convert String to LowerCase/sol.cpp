class Solution {
  public:
    string toLower(string s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        return  s;
    }
};
