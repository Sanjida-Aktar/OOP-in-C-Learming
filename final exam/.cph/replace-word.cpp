#include<bits/stdc++.h>
using namespace std;
int main(){
     int t;
        cin>>t;
        while(t--){
            string s,x;
            cin>>s>>x;
            int l=x.size();
            for(int i=0;i<=(int)s.size()-l;i++){
                if((s.substr(i,l))== x){
                s.replace(i, l,"#");
                }
            }
            cout<<s<<endl;
        }
        
}