#include <bits./stdc++.h>
using namespace std;


//to find hcf of an array find hcf of lowest 2 number



/*int binarysearch(int arr[],int n,int key){
int s=0;int e=n-1;int m=s-(s-e)/2;
while(s<=e){if(arr[m]==key){return m;}             binary search(only in sorted array)
if(key>arr[m]){s=m+1;}
else{e=m-1;}m=(s+e)/2;}
return -1;

}
int main()
{int arr[6]={2,4,6,8,10,12};
   int key;
   cout<<"enter key";cin>>key;
int index=binarysearch( arr,6,key);
cout<<index;
}*/





//reverse binary search
/*int search(vector<int>v,int k){
    int n=v.size();
    int s=0;
    int e=n-1;
    int m=s-(s-e)/2;
    while(s<=e)
    {
if(v[m]==k){return m+1;}
if(v[m]>k){s=m+1;}
else {e=m-1;}m=s-(s-e)/2;
    }
    return -1;
}
int main()
{

vector<int>v={8,7,6,5,4,3,2,1};
  cout<<search(v,7);
}*/









/**
 int main()
{
   int arr[10]={1,2,3,4,5,6,7,8};
   int m=1;
   for (int i = 0; i < 8; i++)            product of array
   {
      m=m*arr[i];
   }
   cout<<m;
   return 0;
}



int main(int argc, char const *argv[])
{
   vector<int>v;
   int n;cin>>n;int value;

   for(int i=0;i<n;i++){cin>>value;
   v.push_back
(value);
   }for(int i:v){cout<<i;}
  sort(v.begin(),v.end());
  for(int i:v){cout<<i;}
  bool a=binary_search(v.begin(),v.end(),5);       binary search and sorting
  if(a==1){cout<<"present";}
  else{cout<<"not";}
   return 0;
}*/

/*
transform(v.begin(),v.end(),v.begin(),::toupper);*/

/*int main()
{int n;cin>>n;
int fib[n];
fib[0]=0;
fib[1]=1;
for (int i = 2; i < n; i++)
{
   fib[i]=fib[i-1]+fib[i-2];cout<<fib[i]<<"  ";
}

}







bool search(int arr[3][4],int key,int i,int j){
 for (int i = 0; i < 3; i++)
   {
     for (int j = 0; j < 4; j++)
     {
     if(arr[i][j]==key){return 1;}
     }

   }

return 0;

}
int main()
{
   int arr[3][4];
   for (int j = 0; j < 4; j++)
   {
     for (int i = 0; i < 3; i++)
     {
      cin>>arr[i][j];
     }

   }

   for (int j = 0; j < 3; j++)
   {
     for (int i = 0; i < 4; i++)
     {
      cout<<arr[j][i]<<"  ";
     }cout<<endl;

   }
   bool found=search(arr,13,3,4);
   if(found){cout<<"yes";}
   else{cout<<"no";}
}









void warray(int arr[],int s,int e){
   for (int i = s; i <=e; i++)
   {
     cout<<arr[i]<<"  ";
   }cout<<endl;

}

void sub(int arr[],int n){for (int s = 0; s< n; s++)
{
   for (int e= s; e <n; e++)
   {
      warray(arr,s,e);
   }

}

}
int main()
{
  int arr[100]={1,2,3,4,5};
  sub(arr,5);
   return 0;
}




int gcd(int a,int b){
while(a!=b){
if(a>b){a=a-b;}
else{b=b-a;}
}
return a;
}

 int main()
 {int a,b;
 cin>>a>>b;

   int p=gcd(a,b);
   int k=a*b/p;
   cout<<k;
   return 0;
 }*/

/*int main(){float a,b,c,d,e,p,r,s;
cin>>a>>b>>c;
d=b*b-(4*a*c);
e=sqrt(d);r=-b/(2*a);s=e/(2*a);
p=-d;if(a==0){cout<<"not quadritic";}
else{if(d==0){cout<<r<<" "<<r;}
else if(d>0){cout<<r+s<<" "<<r-s;}
else if(d<0){
float real=r;
float img=sqrt(p)/(2*a);
cout<<real<<" + i("<<img<<")"<<endl;
cout<<real<<" - i("<<img<<")"<<endl;

}

}
}*/
