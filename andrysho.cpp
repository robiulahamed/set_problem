#include<bits/stdc++.h>
using namespace std;
int main(){
 int n;cin>>n;
 set<int>s;
 int cnt=0;
 int mx=0;
 for(int i=0,x; i<2*n;  i++){
    cin>>x;
    if(s.count(x)){
        cnt--;
      
    }
   else{
    cnt++;
    mx=max(cnt,mx); 
    s.insert(x);
   }
   
 }
 cout<<mx<<endl;
return 0;
}