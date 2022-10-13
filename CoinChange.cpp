class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        // int n=coins.size();
        // int dp[n+1][amount+1];
        // for(int i=0;i<n+1;i++)
        // {
        //     dp[i][0]=0;
        // }
        // for(int j=1;j<amount+1;j++)
        // {
        //     dp[0][j]=INT_MAX;
        // }
        // for(int i=1;i<n+1;i++)
        // {
        //     for(int j=1;j<amount+1;j++)
        //     {
        //         if(coins[i-1]>j)
        //         {
        //             dp[i][j]=dp[i-1][j];
        //         }
        //         else{
        //             if(dp[i][j-coins[i-1]]==INT_MAX)
        //             {
        //                 dp[i][j]=dp[i-1][j];
        //             }
        //             else{
        //                 dp[i][j]=min(dp[i-1][j],dp[i][j-coins[i-1]] +1);
        //             }
        //         }
        //     }
        // }
        // if(dp[n][amount]==INT_MAX)
        // {
        //     return -1;
        // }
        // return dp[n][amount];
        
        
        int n=coins.size();
        int dp[n+1][amount+1];
        dp[0][0]=0;
        for(int j=1;j<amount+1;j++)
        {
            dp[0][j]=INT_MAX;
        }
        for(int i=1;i<n+1;i++)
        {
            dp[i][0]=0;
        }
        for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<amount+1;j++)
            {
                
                if(coins[i-1]>j)
                {
                    dp[i][j]=dp[i-1][j];
                }
                else{
                    if(dp[i][j-coins[i-1]]==INT_MAX)
                    {
                        dp[i][j]=dp[i-1][j];
                    }
                    else{
                        dp[i][j]=min(dp[i-1][j],1+dp[i][j-coins[i-1]]);
                    }
                    
                }
            }
        }
        if(dp[n][amount]==INT_MAX)
        {
            return -1;
        }
        return dp[n][amount];
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};
