class Solution {
public:
    int dp[201][201];
    int dfs(int i,int j,vector<vector<int>>& matrix,int n,int m)
    {
       
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        int maxcnt=1;
        if(i-1>=0 && matrix[i-1][j]>matrix[i][j])
        {
            maxcnt=max(maxcnt,1+dfs(i-1,j,matrix,n,m));
        }
        if(i+1<n && matrix[i+1][j]>matrix[i][j])
        {
            maxcnt=max(maxcnt,1+dfs(i+1,j,matrix,n,m));
        }
        if(j+1<m && matrix[i][j+1]>matrix[i][j])
        {
            maxcnt=max(maxcnt,1+dfs(i,j+1,matrix,n,m));
        }
        if(j-1>=0 && matrix[i][j-1]>matrix[i][j])
        {
            maxcnt=max(maxcnt,1+dfs(i,j-1,matrix,n,m));
        }
        
        return dp[i][j]=maxcnt;
    }
    
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int maxx=INT_MIN;
        memset(dp,-1,sizeof(dp));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int maxcnt=dfs(i,j,matrix,n,m);
                maxx=max(maxx,maxcnt);
            }
        }
        return maxx;
    }
};
