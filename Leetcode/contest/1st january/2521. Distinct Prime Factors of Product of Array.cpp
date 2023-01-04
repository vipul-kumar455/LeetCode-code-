class Solution {
public:
    void solve(set<int>&s,int n)
    {
        int div=2;
        while(n>1)
        {
            if(n%div==0)
            {
                s.insert(div);
                n=n/div;
            }
            else
                div++;
        }
    }
    int distinctPrimeFactors(vector<int>& nums) {
      set<int>s;
        for(auto i:nums)
        {
            solve(s,i);
        }
        return s.size();
    }
};
