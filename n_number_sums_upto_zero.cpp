/*
//if odd to -n/2 se +n/2
//if even to -n/2 se +n/2 except 0 (to make it even)
vector<int>v;
        if(n==1){v.push_back(0);return v;}
       if(n%2!=0){
            for(int i=-n/2;i<=n/2;i++){
                v.push_back(i);
             }}
        if(n%2==0){
             for(int i=-n/2;i<=n/2;i++){
                 if(i!=0){v.push_back(i);}
                
             }
        }
       return v;
*/