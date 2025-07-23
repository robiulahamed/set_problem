//problem=https://vjudge.net/problem/EOlymp-3966
#include<bits/stdc++.h>
using namespace std;
int main(){
       int numOfButter ; cin>>numOfButter;
       set<int>butterfly;
       for(int i=0,x; i<numOfButter; i++){
        cin>>x; 
        butterfly.insert(x);
       }
       
       int  checkButterflyNum;cin>>checkButterflyNum;
       for(int i=0,checkButterfly; i<checkButterfly; i++){
        cin>>checkButterfly;
        if(butterfly.count(checkButterfly)){                //if(butterfly.find(checkButterfly)==butterfly.end())
          
            cout<<"YES"<<endl;
            
        }
        else{
            
            cout<<"NO"<<endl;
        }
       }

return 0;
}