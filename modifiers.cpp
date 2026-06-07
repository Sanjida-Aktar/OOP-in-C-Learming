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
    s.pop_back();//removes the last character of the string
    cout<<s<<endl;
    
    //erease
    s.erase(5,1);//removes the character at index 5 and the next 1 character
    cout<<s<<endl;

    //replace
    s.replace(5,1," ");//replaces the character at index 5 and the next 1 character with a space
    cout<<s<<endl;

    //insert
    s.insert(5," ");//inserts a space at index 5
    cout<<s<<endl;


    return 0;
}