class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {      
      
       int n=nums.size();
       int l=0;   
        int h=n-1;
        if(target>nums[h])
        return h+1;
        while(l<=h)
        {
          int mid=(l+h)/2;
          if(nums[mid]==target)
          {
            return mid;
          }
          else if(nums[mid]>target)
          {
            h=mid-1;
             


          }
          else
          {
            l=mid+1;
            
          }
        }
        return l;

    }
};
