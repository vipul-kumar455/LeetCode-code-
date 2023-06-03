class Solution {
public:
    vector<int> twoSum(vector<int>& a, int target) {
         unordered_map<int,int>mp;
         int n=a.size();
         for(int i=0;i<n;i++)
         {
              if(mp.find(target-a[i])==mp.end())
              {
                  mp[a[i]]=i;
              }
              else 
              {
                  return {mp[target-a[i]],i};
              }
         }
         return {-1,-1};
        
        
    }
};
