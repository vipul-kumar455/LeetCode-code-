class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

vector<int>v;
   set<int>mp(nums1.begin(),nums1.end());
     for(int i=0;i<nums2.size();i++)
     {
         if(mp.find(nums2[i])!=mp.end())
         {
             v.push_back(nums2[i]);
             mp.erase(nums2[i]);
         }
     }
     return v;


    }
};
