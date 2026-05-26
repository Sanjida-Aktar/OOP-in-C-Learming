#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int age;

    Student(string name, int age){
        this->name = name;
        this->age = age;
    }
    
};
Student fun(){
    Student s("Bob", 25);
    return s;
}
int main(){
    Student s2 = fun();
    cout<<"Name: "<<s2.name<<endl;
    cout<<"Age: "<<s2.age<<endl;
    return 0;
}