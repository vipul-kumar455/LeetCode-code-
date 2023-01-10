class Solution {
public:
    vector<int> intersection(vector<int>& nums1,vector<int>& nums2) {
        vector<int>v;
        unordered_set<int>s(nums1.begin(),nums1.end());
        for(auto i:nums2)
        {
            if(s.find(i)!=s.end())
            v.push_back(i);
            s.erase(i);
        }
        return v;

    }
};


////////////////////////////////////////////////////////

class Solution {
public:
    vector<int> intersection(vector<int>& nums1,vector<int>& nums2) {
        vector<int>v;
        unordered_set<int>s(nums1.begin(),nums1.end());
        for(auto i:nums2)
        {
            if(s.count(i)>0)
            v.push_back(i);
            s.erase(i);
        }
        return v;

    }
};
