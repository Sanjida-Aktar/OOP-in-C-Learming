#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int cls;
    char s;
    int id;
    int math_mark;
    int eng_mark;
    Student(string name, int cls, char s, int id,int math_mark, int eng_mark){
        this->name=name;
        this->cls=cls;
        this->s=s;
        this->id=id;
        this->math_mark=math_mark;
        this->eng_mark= eng_mark;

    }
    Student(){}
};
bool cmp(Student a,Student b){
    if(a.eng_mark==b.eng_mark){
        return (a.math_mark==b.math_mark)?a.id<b.id : (a.math_mark>b.math_mark);
    }
    else {
        return (a.eng_mark>b.eng_mark);
    }
}

int main(){
    int n;
    cin>>n;
    Student s[n];
    for(int i=0; i<n; i++){
        cin>>s[i].name>>s[i].cls>>s[i].s>>s[i].id>>s[i].math_mark>>s[i].eng_mark;
    }
    sort(s, s+n,cmp);
    for(int i=0; i<n; i++){
        cout<<s[i].name<<" "<<s[i].cls<<" "<<s[i].s<<" "<<s[i].id<<" "<<s[i].math_mark<<" "<<s[i].eng_mark<<endl;
    }

    return 0;
}