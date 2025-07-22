#include<bits/stdc++.h>
using namespace std;
int main(){
 int input; cin>>input;
 set<int>s;
 for(int i=0,val; i<input; i++){
    cin>>val;
    s.insert(val);

 }
 cout<<s.size()<<endl;
return 0;
}