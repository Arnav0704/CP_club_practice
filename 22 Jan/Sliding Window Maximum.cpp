class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        map<int,int> mp;
        int n= nums.size();
        for(int i=0;i<k;i++){
            mp[nums[i]]++;
        }
        vector<int> ans;
        ans.push_back(mp.rbegin()->first);
        int i=0;
        while(i<=n-k){
            mp[nums[i]]--;
            if(!mp[nums[i]])mp.erase(nums[i]);
            if(i+k<n){
                mp[nums[i+k]]++;
                ans.push_back(mp.rbegin()->first);
            }
            i++;
        }
        return ans;
    }
};