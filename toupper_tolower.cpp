#include <bits/stdc++.h>
using namespace std;


int main()
{
string a="abhay";
transform(a.begin(),a.end(),a.begin(),::toupper);
cout<<a;
transform(a.begin(),a.end(),a.begin(),::tolower);
cout<<a;
}
