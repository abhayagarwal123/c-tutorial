#include <bits/stdc++.h>
using namespace std;

int count(int n,int m,vector<vector<int>>&path,vector<vector<int>>&dp){


    if(n==0&&m==0) return 1;
    if(n<0||m<0) return 0;
    if(dp[n][m]!=-1) return dp[n][m];
    int top=count(n-1,m,path,dp);
    int left=count(n,m-1,path,dp);
    return dp[n][m]=top+left;
}
int main()
{
vector<vector<int>>dp(3,vector<int>(4,-1));   // dp matrix of n,m
vector<vector<int>>v;
cout<<count(2,3,v,dp);                       // computing on n-1,m-1 as 0 based indexing

}

