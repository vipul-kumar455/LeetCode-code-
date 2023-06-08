class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        map<int,int>mp;

        int n=nums.size();
        vector<int>v;
         for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            if(mp.find(i+1)==mp.end())
            {
v.push_back(i+1);
            }
          //  mp[nums[i]];
        }
        return v;
    }
};
