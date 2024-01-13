#include <bits/stdc++.h>
using namespace std;

int main()
{
    string v = "floatingActionButtonLocation:FloatingActionButtonLocation.miniCenterFloat,floatingActionButton:FloatingActionButtonbackgroundColor:Colors.blueAccentshape:CircleBorder(side:BorderSide(width:1))child:Icon(Icons.access_alarm,color:Colors.black87,size:50,)onPressed:()print('yes');}),";
    map<char, int> m;

    for (int i = 0; i < v.size(); i++)
    {
        m[v[i]]++;
    }

    // i.first contain the value of entry
    // i.second contain the frequency of the entry

    for (auto i : m)
    {
        cout << i.first << " occurs " << i.second << " times " << endl;
    }
}
