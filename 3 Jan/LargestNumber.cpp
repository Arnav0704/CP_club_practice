class Solution {
public:
    string largestNumber(vector<int>& nums) {
        string ans;
        vector<string> v;
        for(auto &i : nums) 
            v.push_back(to_string(i));
        sort(v.begin(), v.end(), [](const string& a, const string& b) {
            return a + b > b + a;
        });
        if(v.front() == "0") return "0";
        for(auto &i : v) 
            ans += i;

        return ans;

    }

};