class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> hashMap;

        for(int i = 0; i < nums.size(); i++){
            if (hashMap.contains(target-nums[i])){
                return {hashMap[target-nums[i]],i};
            }
            hashMap[nums[i]] = i;
        }
        
        return {};
    }
};