#include <bits/stdc++.h>
using namespace std;
/*
set doesnt take duplicate element in it every element has single occurence
it also sort element in ascending order
*/
int main()
{
    set<int>s;
s.insert(4);
s.insert(5);
s.insert(6);
s.insert(2);
s.insert(4);
s.insert(7);
s.insert(9);
for(auto i:s){cout<<i<<" ";}cout<<endl;  //print 2 4 5 6 7 9
s.erase(5);                              //remove 5
for(auto i:s){cout<<i<<" ";}cout<<endl;
s.erase(s.begin());                      //remove 2
cout<<s.count(6)<<endl;                  //bool to tell if 6 exist in set or not


}