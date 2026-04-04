class Solution {
public:
    string encode(string &s){
        vector<int> enc(26,0);
        string en="#";
        for(auto c:s)enc[c-'a']++;
        for(auto i:enc)en += (to_string(i)+"#");
        return en;
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        vector<vector<string>> result;

        for(auto &s:strs){
            mp[encode(s)].push_back(s);
        }
        for(auto &it:mp) result.push_back(it.second);
        return result;
    }
};
