class Solution {
public:
    string lexSmallest(string s) {
        int n = s.size();
        string ans = s;
        
        for (int i = 1; i <= n; i++) {
            
            string s1 = s;
            reverse(s1.begin(), s1.begin() + i);
            
            
            string s2 = s;
            reverse(s2.begin() + i, s2.end());
            
           
            ans = min({ans, s1, s2});
        }
        
        return ans; 
    }
};
