#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    string search;
    getline(cin,str);
    getline(cin,search);
    /**
     
    first method
    int a=str.length();
    int b=search.length();
    int flag;int k=0;
    for (int i = 0; i <=a-b; i++)
    {
        int j;
        for ( j = i; j< b; j++)
        {
           
            if(str[i+j]!=search[j]){break;}
        }
         if(j==b){k=1;}
    }
    
   if(k==0){cout<<"no";}
        else{cout<<"yes";}
        
        
        
      
 //second method  using strstr and c_str()

      

       if(strstr(str.c_str(),search.c_str())){cout<<"yes";}
       else{cout<<"no";}  
       
       */
}

 
