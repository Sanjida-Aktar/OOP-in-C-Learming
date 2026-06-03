#include<bits/stdc++.h>
#include<fstream>
using namespace std;

class A{
    public:
    string name, email;
    int number;

    //input function to take input from user
    int input(){
        cout<<"Enter name: ";
        getline(cin, name);
        cout<<"Enter email: ";
        getline(cin, email);
        cout<<"Enter your phone number: ";
        cin>>number;
    }
//output function to display the output
    int output(){
        cout<<"Your name is: "<<name<<endl;
        cout<<"Your email is: "<<email<<endl;
        cout<<"Your phone number is: "<<number<<endl;
    }


}
int main(){
    A obj;
    obj.input();
    obj.output();

    return 0;
}