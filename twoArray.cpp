#include<bits/stdc++.h>
using namespace std;
int main(){
 int n;cin>>n;
 set<int>st;
 for(int i=0,x; i<n;  i++){
    cin>>x;
    st.insert(x);
 }
 if(st.size()!=1){
    st.erase(st.begin());
    cout<<*st.begin()<<endl;
 }
 else {
    cout<<"NO"<<endl;
 }
return 0;
}