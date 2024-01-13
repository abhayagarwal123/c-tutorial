#include <bits/stdc++.h>
using namespace std;

int main()
{
   map<string,int>m;            //here string is key and int is its mapping or value
//insert
m["hello"]=4;
m["hi"]=3;
m["hell"]=2;
m["helle"]=1;
//search value (it give its value associated with it)
cout<<m["hell"]<<endl;
cout<<m.at("hi")<<endl;
cout<<m.size()<<endl;
cout<<m.count("hi")<<endl;
cout<<m.size()<<endl;
cout<<m.count("hello")<<endl;
for(auto i:m){
    cout<<i.first<<" "<<i.second<<endl;
}
cout<<endl;
map<string,int>::iterator i=m.begin();
while(i !=m.end()){
    cout<<i->first<<" "<<i->second<<endl;i++;
}
}