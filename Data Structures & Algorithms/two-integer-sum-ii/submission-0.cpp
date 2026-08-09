class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0;
        int r = numbers.size() - 1;
        
        while (l < r) {
            int current_sum = numbers[l] + numbers[r];
            
            if (current_sum == target) {
                return {l + 1, r + 1}; 
            } 
            else if (current_sum < target) {
                l++; 
            } 
            else {
                r--; 
            }
        }
        return {}; 
    }
};
