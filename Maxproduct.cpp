class Solution {
public:
    
    int bitsfunc(string s)
    {
        int ans=0;
        for(int i=0;i<s.length();i++)
        {
            int t=s[i]-'a';
            ans=ans|(1<<t);
        }
        return ans;
    }
    
    int maxProduct(vector<string>& words) {
        vector<int>bits;
        for(int i=0;i<words.size();i++)
        {
            int num=bitsfunc(words[i]);
            bits.push_back(num);
        }
        int ans=0;
        for(int i=0;i<words.size()-1;i++)
        {
            for(int j=i+1;j<words.size();j++)
            {
                if((bits[i]&bits[j])==0)
                {
                    int mul=words[i].length()*words[j].length();
                    ans=max(ans,mul);
                }
            }
        }
        return ans;
    }
};
