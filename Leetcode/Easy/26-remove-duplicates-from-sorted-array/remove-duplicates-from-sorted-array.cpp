class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int track = 0;
        for(int i = 0 ; i < nums.size();i++)
        {
           
            if(nums[track]!=nums[i])
            {
                 track++;
                nums[track] = nums[i];
            }
        }
        
        return track+1;
           }
};