#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>nums;
    nums={1,2,3,4,5};
    int sum=0;
        int maxsum=nums[0];
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
            maxsum=max(sum,maxsum);
            if(sum<0){sum=0;}
}
cout<<maxsum;}