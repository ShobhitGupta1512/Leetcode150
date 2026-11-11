class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> mp;
        for(int i=0; i<nums.size(); i++){
            
            if(mp.find(nums[i]) != mp.end()) return nums[i];

            mp.insert(nums[i]);
        }
        return -1;

    }
};