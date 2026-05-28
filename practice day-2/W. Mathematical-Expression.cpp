#include<iostream>
using namespace std;
int main(){
     int a,b,c;
     char s1,s2;
     cin>>a>>s1>>b>>s2>>c;
     if(s1=='+' && s2 =='='){
        if(a+b==c){
            cout<<"Yes";
        }
        else{
            cout<<a+b;
        }
     }
     else if(s1=='-' && s2 =='='){
        if(a-b==c){
            cout<<"Yes";
        }
        else{
            cout<<a-b;
        }
     }
        else if(s1=='*' && s2 =='='){
            if(a*b==c){
                cout<<"Yes";
            }
            else{
                cout<<a*b;
            }
        }
     
    return 0;
}