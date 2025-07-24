#include<bits/stdc++.h>
using namespace std;
int main(){
  while(1){
    string s;
    getline(cin,s);
    if(s=="#") break;
    stringstream ss(s);
    set<string>st;
    string again_s;
    while(ss>>again_s){
        st.insert(again_s);
    }
    cout<<st.size()<<endl;
  }
return 0;
}