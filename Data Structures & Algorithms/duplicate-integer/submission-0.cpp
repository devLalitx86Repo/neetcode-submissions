class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int,int> mp;
        for(int n:nums) {
            if(mp.count(n))return true;
            else mp[n]=n;
        }
        return false;
    }
};