//https://judge.yosupo.jp/problem/double_ended_priority_queue
#include<bits/stdc++.h>
using namespace std;
int main(){
     int prmset,quer;
     cin>>prmset>>quer;
     set<int>st;
     for(int i=0,x; i<prmset; i++){
        cin>>x;
        st.insert(x);
     }
     for(int i=0,x; i<quer; i++){
        cin>>x;
        if(x==0){
            int val;cin>>val;
            st.insert(val);
        }
        else if(x==2){
            cout<<*prev(st.end())<<endl;
            st.erase(prev(st.end()));
        }
        else{
            cout<<*st.begin()<<endl;
            st.erase(st.begin());
        }
     }
return 0;
}