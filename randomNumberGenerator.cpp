#include <bits/stdc++.h>
using namespace std;


int main()
{
   srand(time(0));
    int a=rand()%100;
    int guess;
    while(guess!=a){
        cout<<"take a guess"<<endl;
        cin>>guess;
        if(guess<a){
            cout<<"your number is smaller ,enter larger number"<<endl;
        }
        else if(guess>a){
            cout<<"your number is larger ,enter smaller number"<<endl; 
        }
    }
cout<<"your guess is correct"<<endl;
    return 0;
}