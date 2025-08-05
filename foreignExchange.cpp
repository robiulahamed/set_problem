#include<bits/stdc++.h>
using namespace std;
int main(){
 int t;cin>>t;
 while(t--){
    int n;cin>>n;
    multiset<pair<long long,long long>>mp;
    for(long long i=0,x,y; i<n;i++){
        cin>>x>>y;
        auto it = mp.find({y,x});
        if(it==mp.end()){
            mp.insert({x,y});
        }
        else{
            mp.erase(it);
        }
    }

   if(mp.size()!=0) cout<<"NO"<<endl;
   else cout<<"YES"<<endl;

 }
return 0;
}