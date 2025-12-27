class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==1)
        {
            return true;
        }
        for(long long i = 4 ; i <=n ; i=i*4)
        {
            if(i==n)
            {
                return true;
            }
        }
        return false;
    }
};