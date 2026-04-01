class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> a(26,0), b(26,0);
        for(auto c:s)a[c-'a']++;
        for(auto c:t)b[c-'a']++;
        
        return a==b;
    }
    
};
