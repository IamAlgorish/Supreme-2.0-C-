class Solution {
public:
    int counter(vector<int> temp)
    {
        int counter = 0;
        for(int i = 0 ; i < temp.size();i++)
        {
            counter = counter + (i*temp[i]);

        }
        return counter;
    }

    vector<int> reverse(vector<int>& temp)
    {
        vector<int>ans;
        ans.push_back(temp[temp.size()-1]);
        int i = 0;
        while(i<temp.size()-1)
        {
            ans.push_back(temp[i]);
            i++;
        }
        return ans;
    }

    int maxRotateFunction(vector<int>& nums) {
        // int ans = counter(nums);
        // int i = 1;
        // vector<int> temp = nums;
        // while(i < nums.size())
        // {
        //     temp = reverse(temp);
        //     ans = max(ans,counter(temp));
        //     i++;

        // }
        // return ans;
        vector<int> A = nums;
        int sum = 0, F = 0;
        int n = A.size();

        for (int i = 0; i < n; i++) {
            sum += A[i];
            F += i * A[i];
        }

        int maxi = F;

        for (int i = 1; i < n; i++) {
            F += sum - n * A[n - i];
            maxi = max(maxi, F);
        }

        return maxi;
    
    }
};