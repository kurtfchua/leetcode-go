class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::set<int> set;

        for (int num : nums){
            if (set.contains(num)){
                return true;
            }
            set.insert(num);
        }

        return false;
    }
};