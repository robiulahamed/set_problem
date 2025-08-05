#include<bits/stdc++.h>
//https://www.spoj.com/problems/SORT2D/en/
using namespace std;
int main(){
 int t;
 scanf("%d",&t);
 while(t--){
    int n; 
    scanf("%d",&n);
     multiset<pair<int,int>>ml;
     for(int i=0;i<n;   i++){

        int x,y;
        scanf("%d %d",&x,&y);
        ml.insert({x,-y});
     }
     for(auto it=ml.begin(); it!=ml.end(); ++it){
            printf("%d %d\n",it->first, -it->second);
     }
 }
return 0;
}