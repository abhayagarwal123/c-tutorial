#include <bits/stdc++.h>
using namespace std;

int f(int i, vector<int> weight, vector<int> value, int wl, vector<vector<int>> &dp)
{
    if (i < 0)      // out of bound
        return 0;
    if (wl <= 0)    //no space in bag
        return 0;
    if (dp[i][wl] != -1)
        return dp[i][wl];
    int pick = INT_MIN;
    if (wl >= weight[i])   //if element can be picked
    {
        pick = value[i] + f(i - 1, weight, value, wl - weight[i], dp);
    }
    int notPick = f(i - 1, weight, value, wl, dp);
    return dp[i][wl] = max(pick, notPick);
}

int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight)
{
    vector<vector<int>> dp(n, vector<int>(maxWeight + 1, -1));
    return f(n - 1, weight, value, maxWeight, dp);
}
int main()
{
    vector<int> weight = {2, 4, 5};
    vector<int> val = {30, 10, 50};
    cout << knapsack(weight, val, 3, 7);
}
