#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int marks;
    int roll;
    Student(string name,int roll,int marks){

        this->name=name;
        this->roll=roll;
        this->marks=marks;
    }
    Student(){}
};
bool cmp(Student a,Student b){
    // if(a.marks==b.marks){
    //     return a.name<b.name;
    // }
    // else{
    //     return a.marks>b.marks;
    // }
    return a.marks==b.marks ? a.roll<b.roll : a.marks>b.marks;
}
int main(){
     int n;
     cin>>n;
     Student s[n];
        for(int i=0;i<n;i++){
            cin>>s[i].name>>s[i].roll>>s[i].marks;
        }
        sort(s,s+n,cmp);
        for(int i=0;i<n;i++){
            cout<<s[i].name<<" "<<s[i].roll<<" "<<s[i].marks<<endl;
        }
    return 0;
}