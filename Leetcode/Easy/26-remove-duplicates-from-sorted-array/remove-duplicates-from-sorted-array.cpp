class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int track = 0;
       int counter = 0;
        int j = 1;
           for(int i = 0 ; i < nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                counter++;
            }}
        for(int i = 0 ; i < nums.size();i++)
        {
           
            if(nums[track]==nums[i])
            {
                
            }
            else
            {
                track++;
                nums[track] = nums[i];
            }
        }
        
        return nums.size()-counter;
           }
};