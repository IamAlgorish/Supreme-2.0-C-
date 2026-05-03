class Solution {
public:
    bool checker(int num , vector<int>temp)
    {
        for(int i = 0; i < temp.size();i++)
        {
            if(num==temp[i])
            {
                return false;
            }

        }
        return true;
    }
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>>ans;
        map<int,int>mp;
        vector<int>temp1;
        for(int i = 0; i < nums1.size();i++)
        {
            if(!mp[nums1[i]])
         {   mp[nums1[i]] = 0;
        }
            if(checker(nums1[i],nums2)&&mp[nums1[i]]==0)
            {
                mp[nums1[i]]++;
                temp1.push_back(nums1[i]);
            }
            
        }
        ans.push_back(temp1);
        temp1.clear();
        mp.clear();
        for(int i = 0 ;i < nums2.size();i++)
        {
               if(!mp[nums2[i]])
         {   mp[nums2[i]] = 0;
        }
            if(checker(nums2[i],nums1)&&mp[nums2[i]]==0)
            {
                mp[nums2[i]]++;
                temp1.push_back(nums2[i]);
            }
            
        }
        ans.push_back(temp1);
        temp1.clear();
        mp.clear();
        return ans;
    }
};