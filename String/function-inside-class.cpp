#include<bits/stdc++.h>
using namespace std;

class Stuent{
    public:
    string name;
    int age;
    Stuent(string name,int age){
        this->name=name;
        this->age=age;
    }

    void display(){
        cout<<"hello"<<endl;
    }
};
int main(){
     Stuent s("Sanjida Aktar",20);
     cout<<s.name<<" "<<s.age<<endl;
     s.display();
    return 0;
}