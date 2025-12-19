class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int index = -1;
        map<int,int>mp;
        for(int i = 0 ; i< nums.size(); i++ )
        {
            if(!mp.count(nums[i]))
            {
                mp[nums[i]] = i;

            }
            else
            {
                index = i;
            }

        }
        vector<int>ans;
        ans.push_back(nums[index]);
        int n = nums[index];
       
        while(n>=1)
        {
            if(!mp.count(n))
            {
                
                ans.push_back(n);
                return ans;
            }
            n--;
        }
        n = nums[index];

        while(mp.count(n))
        {
            n++;
        }

        ans.push_back(n);
        return ans;



    }
};