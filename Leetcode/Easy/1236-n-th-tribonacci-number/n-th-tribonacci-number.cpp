class Solution {
public:
    int tribonacci(int n) {
        if(n<=0)
        {
            return 0;
        }
        else if(n<=2)
        {
            return 1;
        }
        int term = 2;
        int t0 = 0;
        int t1 = 1;
        int t2 = 1;
        int ans = 0;
        while(term!=n)
        {
            ans = t0 + t1 + t2;
            t0 = t1;
            t1=t2;
            t2=ans;
            term++;
        }
        return ans;
    }
};