#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="Hello World";
    string s1="Hello";
    s.append(s1);
    cout<<s<<endl;

    //push_back
    s.push_back('!');//single character can be added to the end of the string
    cout<<s<<endl;
    return 0;
}