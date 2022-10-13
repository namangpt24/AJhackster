class Solution {
public:
    
    bool isPalindrome(string s)
    {
        if(s=="")
        {
            return true;
        }
        int i=0;
        int j=s.length()-1;
        while(i<j)
        {
            if(s[i]!=s[j])
            {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    
    vector<vector<int>> palindromePairs(vector<string>& words) {
//         unordered_map<string,int>m;
//         for(int i=0;i<words.size();i++)
//         {
//             string t=words[i];
//             reverse(t.begin(),t.end());
//             m[t]=i;
//         }
        
//         int n=words.size();
//         set<vector<int>>anstmp;
        
//         for(int i=0;i<n;i++)
//         {
//             for(int j=0;j<=words[i].length();j++)
//             {
//                 string pref=words[i].substr(0,j);
//                 string suff=words[i].substr(j);
//                 if((m.find(pref)!=m.end()) && (palindromecheck(suff)==true) && (m[pref]!=i))
//                 {
//                     anstmp.insert({i,m[pref]});
//                 }
//                 if(m.find(suff)!=m.end() && (palindromecheck(pref)==true) && (m[suff]!=i))
//                 {
//                     anstmp.insert({m[suff],i});
//                 }
//             }
            
            
//         }
//         vector<vector<int>>ans;
//             for(auto &it:anstmp)
//             {
//                 ans.push_back(it);   
//             }
//         return ans;
         vector<vector<int>> ans;
        int n = words.size();
        if(n<2) return ans;
        unordered_map<string, int> m;
        for(int i=0;i<n;++i){
            
            auto s= words[i];
            reverse(s.begin(),s.end());
            m[s]=i;
        }
        
        for(int i=0; i<n; ++i){
            for(int j=0; j<=words[i].size(); ++j){
                string st1 = words[i].substr(0,j); // prefix
                string st2 = words[i].substr(j);    //sufix           
                 
                 if(m.count(st1) && isPalindrome(st2) && m[st1] != i) {
                     ans.push_back({i, m[st1]});    
                 }

                 if(!st1.empty() && m.count(st2) && isPalindrome(st1) && m[st2] != i) {
                     ans.push_back({m[st2], i});
                 }
            }            
        }
        return ans;
        
        
    }
};
