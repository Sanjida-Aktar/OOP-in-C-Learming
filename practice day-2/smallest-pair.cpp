#include<bits/stdc++.h>
using namespace std;
int main(){
   int t,n;
   cin>>t;
   while(t--){
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int min_num=INT_MAX;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n;j++){
            min_num=min(min_num, arr[i]+arr[j]+j-i);
        }
    }
    cout<<min_num;
   }  
    return 0;
}