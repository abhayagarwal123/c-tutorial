#include <bits/stdc++.h>
using namespace std;


int sum(vector<int>v,int k){
    int a=0;
    for(int i=0;i<v.size();i++){
        a+=v[i];
    }
    if(a==k) return 1;
    return 0;
}

int main()
{

    vector<int> v = {3,4,7,-2,2,1,4,2};
    vector<vector<int>> a;
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = i; j < v.size(); j++)
        {
            vector<int> temp;
            for (int k = i; k <= j; k++)
            {
                temp.push_back(v[k]);
            }
            a.push_back(temp);
        }
    }
int s=0;
    for (int i = 0; i < a.size(); i++)
    {
       s+=sum(a[i],7);
    }
cout<<s;
    return 0;
}
