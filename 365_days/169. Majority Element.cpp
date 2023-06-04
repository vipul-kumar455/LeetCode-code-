class Solution {
public:
    int majorityElement(vector<int>& nums) {
      //  map<int,int>mp;
       int n=nums.size();
      //   for(int i=0;i<n;i++)
      //   {
      //     mp[nums[i]]++;
      //   } 
      //   for(auto i:mp)
      //   {
      //     if(i.second>n/2)
      //     return i.first;
      //   }
      //   return -1;
        //moore's algorithm
        /// o(n) and o(1)
      int cnt=0,maj;
      for(int i=0;i<n;i++)
      {
        if(cnt)
        {
          cnt+=(nums[i]==maj?1:-1);
        }
        else
        {
          maj=nums[i];
          cnt=1;
        }
      }
      return maj;
    }
};
