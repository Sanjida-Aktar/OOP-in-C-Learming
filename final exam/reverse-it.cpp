#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int cls;
    char section;
    int roll;
    Student(string name, int cls, char section, int roll){
        this->name=name;
        this->cls=cls;
        this->section=section;
        this->roll=roll;
    }
    Student(){}
};

int main(){
    int n;
    cin>>n;
     Student s[n];
     for(int i=0; i<n; i++){
     cin>>s[i].name>>s[i].cls>>s[i].section>>s[i].roll;
     }
     for(int i=0; i<n; i++){
        s[i].section=s[n-1-i].section;
     }
     for(int i;i<n; i++){
        cout<<s[i].name<<" "<<s[i].cls<<" "<<s[i].section<<" "<<s[i].roll<<endl;
     }
    return 0;
}