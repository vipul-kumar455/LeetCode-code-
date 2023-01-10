class Solution {
public:
bool solve(string s,string k)
{
    bool ans=false;
    transform(s.begin(),s.end(),s.begin(),::tolower);
    for(int i=0;i<s.size();i++)
    {
        for(int j=0;j<k.size();j++)
        {
            if(s[i]==k[j])
            {
                ans=true;
                break;
            }
            else
            ans=false;
        }
        if(ans==false)
        return false;
    }
    return true;
}
    vector<string> findWords(vector<string>& words) {
        string f1="qwertyuiop";
        string f2="asdfghjkl";
        string f3="zxcvbnm";
        vector<string>v;
        for(int i=0;i<words.size();i++)
        {
            if(solve(words[i],f1)) v.push_back(words[i]);
            if(solve(words[i],f2)) v.push_back(words[i]);
            if(solve(words[i],f3)) v.push_back(words[i]);
        }
        return v;
    }
};
