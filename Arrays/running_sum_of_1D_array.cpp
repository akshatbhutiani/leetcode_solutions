class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> result;
        int l = nums.size();
        for(int i = 0; i <l; i++){
            int ans = 0;
            for(int j = 0; j <=i; j++){
                ans += nums[j];
            }
            result.push_back(ans);
        }
        return result;
    }
};