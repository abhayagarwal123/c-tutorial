#include <bits/stdc++.h> 
using namespace std;
int maxSum(int i,vector<int> &nums,vector<int> &dp){
    if(i==0) return nums[i];
    if(i<0) return 0;
    if(dp[i]!=-1) return dp[i];
    int pick=nums[i]+maxSum(i-2,nums,dp);
    int notPick=maxSum(i-1, nums,dp);
    return dp[i]=max(pick,notPick);
}

int maximumNonAdjacentSum(vector<int> &nums){
    int n=nums.size();
   vector<int>dp(n+1,-1);
   return maxSum(n-1, nums,dp);
}


int main(){
    vector<int>v={1,2,6,5,3,7};
  cout<< maximumNonAdjacentSum(v);
 
}