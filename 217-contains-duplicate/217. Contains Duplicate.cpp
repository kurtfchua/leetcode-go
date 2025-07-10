class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::set<int> numSet;

        for (int num : nums){
            if (numSet.contains(num)){
                return true;
            }
            numSet.insert(num);
        }

        return false;
    }
};