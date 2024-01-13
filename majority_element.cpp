/*
vector<int>arr;
 map<int,int>m;
         vector<int>v;
         //get frequency on map
         for(int i=0;i<arr.size();i++){
             m[arr[i]]++;
         }
         //get the frequency on vector
         for(auto i:m){
             v.push_back(i.second);
         }
                 sort(v.begin(),v.end());
                 reverse(v.begin(),v.end());
                 //find the element mapped with max frequency
                  for(auto i:m){
             if(i.second==v[0]){
                 return i.first;
             }
         }
         
                 
                 return 1;
    }
*/