class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int index = 0;
     for(int i = 0 ; i < nums.size();i++)
     {
        if(nums[i]>=nums[index])
        {
            index = i;
        }

     }
    

        sort(nums.begin(),nums.end());
        
        if(nums[nums.size()-1]>=2*nums[nums.size()-2])
        {
            return index;
        }
        else {
            return -1;
        }
    }
};