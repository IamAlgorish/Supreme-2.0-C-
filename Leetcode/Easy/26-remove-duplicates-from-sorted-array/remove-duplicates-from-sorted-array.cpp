class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int track = 0;
        vector<int>ans;
        ans.push_back(nums[0]);
        for(int i = 0  ; i <= nums.size()-1;i++ )
        {
        if(ans[ans.size()-1]!=nums[i])
            {
                ans.push_back(nums[i]);
            }
        }
        for(int i = 0 ; i < ans.size();i++)
        {
            nums[i] = ans[i];
        }
        return ans.size();
           }
};