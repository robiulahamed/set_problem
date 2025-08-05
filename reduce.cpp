#include<bits/stdc++.h>
using namespace std;
int main(){
 int t;cin>>t;
 while(t--){
    int n;cin>>n;
    multiset<long long>s;
    for(int i=0; i<n;  i++){

        long long x;cin>>x;
        s.insert(x);
    }
    long long cnt=0,cnt1=0;
    while(s.size()>1){
        long long it = *s.begin();
        s.erase(s.begin());
        long long it2 = *s.begin();
        s.erase(s.begin());
       
        cnt+=it+it2;
        s.insert(it2+it);
    }
    cout<<cnt<<endl;

 }
return 0;
}