#include<bits/stdc++.h>
using namespace std;
int main(){
     string s="hello world";
    //  for(int i=0;i<s.size();i++){
    //     cout<<s[i]<<" ";
    //  }
        for(auto it=s.begin();it!=s.end();it++){
            cout<<*it<<" ";
        }
        cout<<endl;
        for(auto it=s.rbegin();it!=s.rend();it++){
            cout<<*it<<" ";
        }
        cout<<endl;
    return 0;
}