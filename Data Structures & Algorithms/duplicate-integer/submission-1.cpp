class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int l=0;
        sort(nums.begin(), nums.end());
        for(int r=1;r<nums.size();r++){
            if(nums[l]==nums[r]){
                return true;
            }
            else l++;
        }
        return false;
    }
};