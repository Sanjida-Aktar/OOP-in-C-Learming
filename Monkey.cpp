#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
     while(cin >> s && !cin.eof())
     
     {
        sort(s.begin(),s.end());
        cout<<s;
     }

    return 0;
}