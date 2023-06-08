class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int>s;

        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            s.insert(nums[i]);
        }
        if(s.size()>=3)
        {
        int last=s.size()-3;
        auto tar=next(s.begin(),last);
        return *tar;
        }
        return *--s.end();

    }

};
