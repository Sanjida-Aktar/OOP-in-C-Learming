#include<bits/stdc++.h>
using namespace std;
int main(){
     string s="hello world";
     cout<<s.size()<<endl;
     cout<<s.max_size()<<endl;
     cout<<s.capacity()<<endl;
     s.clear();
     if(s.empty()){
        cout<<"String is empty."<<endl;
     }
     else{
        cout<<"String is not empty."<<endl;
     }
     string s1="hello";
     s1.resize(3);
     cout<<s1<<endl;
     s1.resize(10,'x');
     cout<<s1<<endl;
    return 0;
}