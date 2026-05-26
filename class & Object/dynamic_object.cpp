#include<iostream>
using namespace std;
class MyClass {
    public:
    int data;
    string name;

    MyClass(int data, string name) {
        this->data = data;
        this->name = name;
    }
};

int main(){
    MyClass *obj = new MyClass(10, "Example");
    cout << "Data: " << obj->data << endl;
    cout << "Name: " << obj->name << endl;
    return 0;
}