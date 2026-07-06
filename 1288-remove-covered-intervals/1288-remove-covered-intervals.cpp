class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        vector<vector<int>> stack;

        sort(intervals.begin(), intervals.end(), [](auto &a, auto &b) {
            if (a[0] == b[0]) return a[1] > b[1];
            return a[0] < b[0];
        });

        stack.push_back(intervals[0]);

        for (int i = 1; i < intervals.size(); i++) {
            int a = intervals[i][0], b = intervals[i][1];
            int x = stack.back()[0], y = stack.back()[1];

            if (x <= a && b <= y) continue;

            stack.push_back(intervals[i]);
        }

        return stack.size();
    }
};