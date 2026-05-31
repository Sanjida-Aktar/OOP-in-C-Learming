#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    int id;
    string name;
    char section;
    int marks;

    void input() {
        cin >> id >> name >> section >> marks;
    }

    void print() {
        cout << id << " " << name << " " << section << " " << marks << "\n";
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        Student students[3];
        for (int i = 0; i < 3; i++) {
            students[i].input();
        }

        Student best = students[0];

        for (int i = 1; i < 3; i++) {
            if (students[i].marks > best.marks) {
                best = students[i];
            } else if (students[i].marks == best.marks && students[i].id < best.id) {
                best = students[i];
            }
        }

        best.print();
    }
    return 0;
}
