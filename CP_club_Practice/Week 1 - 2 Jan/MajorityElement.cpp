class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt = 0, ans;
        for (int num : nums) {
            if (!cnt) {
                ans = num;
            }
            cnt += num == ans ? 1 : -1;
        }
        return ans;
    }
};