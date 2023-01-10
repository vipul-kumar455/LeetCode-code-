class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int s=0,s1=0;
        for(int i=0;i<nums.size();i++)
        {
            s+=nums[i];
        }
        for(int i=0;i<nums.size();i++)
        {
            s-=nums[i];
            if(s==s1)
            return i;
            s1+=nums[i];
        }
        return -1;
    }
};
