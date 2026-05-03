class Solution {
public:
    string shifter(string temp)
    {
        string ans ="";
        for(int i = 1 ; i <temp.size();i++)
        {
            ans+=temp[i];
        }
        ans+= temp[0];
        return ans;
    }
    bool rotateString(string s, string goal) {
        if(s.size()!= goal.size())
        {
            return false;
        }
        int i = 0;
        while(i<goal.size())
        {
            if(s==goal)
            {
                return true;
            }
            s = shifter(s);
            i++;
        }
        return false;
    }
};