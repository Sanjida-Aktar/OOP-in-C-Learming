#include<bits/stdc++.h>
using namespace std;
int main(){
     int n;
     cin>>n;
     int a[n];
    //  for(int i=n-1;i>=0;i--){
    //     cin>>a[i];
    //  }
    // reverse(array name, array size);
    reverse(a,a+n);
     for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
     }
     cout<<endl;
    return 0;
}