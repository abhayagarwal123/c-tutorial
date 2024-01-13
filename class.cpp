#include<bits/stdc++.h>

using namespace std;
class human{
public :
string h;
string dob;
int m;
human(string a,string b){
    string c=a+b;
    cout<<c;
}

public :
void get(){
cout<<"enter name"<<endl;
cin>>h;
cout<<"enter dob"<<endl;
cin>>dob;
cout<<"enter m"<<endl;
cin>>m;

}
void display(){
cout<<"name "<<h<<endl;
cout<<"dob "<<dob<<endl;
cout<<"m "<<m<<endl;




}
};
class male:public human{
public:


};

class baby{

public:int b;
};
class female:public human,public baby{
public:int f;

};



int main(){
human h("abhay ","agarwal");

}