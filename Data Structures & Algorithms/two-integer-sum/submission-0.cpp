class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        vector<int> result(2,0);
        for(int n:nums){
            int f = target-n;
            if(mp.count(f)){
                result[1]=mp[f];
                break;
            }
            mp[n]=result[0];
            result[0]++;
        }
        return (result[0]<result[1])?result:vector<int>{result[1],result[0]};
        
    }
};
