#include<bits/stdc++.h>
using namespace std;
int main(){
 int level;cin>>level;
 int littleX,littleY;
 set<int>st;
 cin>>littleX;
 for(int i=0,passlevel; i<littleX; i++){
          cin>>passlevel;
          st.insert(passlevel);


 }
 cin>>littleY;
 for(int i=0,passleve;  i<littleY; i++){
    cin>>passleve;
    st.insert(passleve);
 }
 int cnt=0;
 for(int i=1; i<=level; i++){
    if(st.count(i)) cnt++;
 }
 if(cnt==level) cout<<"I become the guy."<<endl;
 else cout<<"Oh, my keyboard!"<<endl;
return 0;
}