#include<bits/stdc++.h>
#include<fstream>
using namespace std;

class A{
    public:
    string name, email;
    int number;

    //input function to take input from user
    void input(){
        cout<<"Enter name: ";
        getline(cin, name);
        cout<<"Enter email: ";
        getline(cin, email);
        cout<<"Enter your phone number: ";
        cin>>number;
    }

    void output(){
        cout<<"Your name is: "<<name<<endl;
        cout<<"Your email is: "<<email<<endl;
        cout<<"Your phone number is: 0"<<number<<endl;
    }

    void fileMaker(){
        ofstream file("info.txt");
        file<<"Your name is: "<<name<<endl;
        file<<"Your email is: "<<email<<endl;
        file<<"Your phone number is: 0"<<number<<endl;

        file.close();
    }


};
int main(){
    A obj;
    obj.input();
    obj.output();
    obj.fileMaker();
    return 0;
    
}