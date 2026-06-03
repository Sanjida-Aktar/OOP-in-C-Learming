#include<bits/stdc++.h>
using namespace std;
int main(){

    try{
     int a, b;
     cout<<"Enter two numbers: ";
     cin>>a>>b;
      if(b==0){
        throw -1;
    }

     double result= double(a)/b;
     cout<<"The result is: "<<result<<endl;
    
   
}
catch(...){
    cout<<"Error: Division by zero is not allowed!"<<endl;
    cout<<"Place try again."<<endl;
}
    return 0;
}