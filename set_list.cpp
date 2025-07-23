#include<bits/stdc++.h>  //https://vjudge.net/problem/HackerRank-cpp-sets
using namespace std;
int main(){
        int operation;cin>>operation;
        set<int>st;
        for(int i=0;   i<operation; i++){
            long long digit;cin>>digit;
            if(digit==1){
                long long addVal;
                cin>>addVal;
                st.insert(addVal);
            }
            else if(digit==2){
                long long  delval;
                cin>>delval;
                st.erase(delval);
            }
            else{
                long long presentVal;
                cin>>presentVal;
                if(st.count(presentVal)){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
            return 0;
        }
}


/* 
set<int>::  iterator it = st.find(val);
if the val are not present in the set then it return "it == st.end()" else return  the 

*/