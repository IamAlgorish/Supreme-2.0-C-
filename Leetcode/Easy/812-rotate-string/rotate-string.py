class Solution:
    def rotateString(self, s: str, goal: str) -> bool:
        if(len(s)!= len(goal)):
            return False
        s = s+s
        ans = s.find(goal)
        if ans<0:
            return False
        return True
        