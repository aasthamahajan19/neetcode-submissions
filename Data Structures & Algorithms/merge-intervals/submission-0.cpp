class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if (intervals.empty()) {
            return {};
        }
        
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> mergeit;
        vector<int> temp = intervals[0];
        
        for (const auto& it : intervals) {
            if (it[0] <= temp[1]) {
                temp[1] = max(it[1], temp[1]);
            } else {
                mergeit.push_back(temp);
                temp = it;
            }
        }
        mergeit.push_back(temp);
        return mergeit;
    }
};
