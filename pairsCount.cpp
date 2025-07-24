//https://www.spoj.com/problems/PAIRS1/en/
#include<bits/stdc++.h>
using namespace std;
int main(){
 int totalnum,pair;
 cin>>totalnum>>pair;
 set<int>st;
 int finalans=0;
 for(int i=0,val; i<totalnum; i++){
    cin>>val;
    st.insert(val);
   
 }
 for(auto y:st){
    finalans+=(st.count(y-pair));
 }
 
 
 cout<<finalans<<endl;

return 0;
}