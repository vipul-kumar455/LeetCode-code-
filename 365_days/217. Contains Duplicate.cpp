class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int>s;
        int N=nums.size();
        for(int i=0;i<N;i++)
        {
         s.insert(nums[i]);
        }
        if(s.size()==N)
        return 0;
        else
        return 1;
    }
};
