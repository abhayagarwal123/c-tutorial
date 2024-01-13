#include <bits/stdc++.h>
using namespace std;

int main()
{
    //for min heap
  priority_queue<int, vector<int>, greater<int> >p;
p.push(2);
p.push(3);
p.push(5);
p.push(7);
p.push(1);
cout<<p.top();


}