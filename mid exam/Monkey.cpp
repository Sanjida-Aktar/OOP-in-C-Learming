#include <bits/stdc++.h>
using namespace std;

int main() {
    char s[100000+5];  
    while (cin.getline(s, 100000)) {
        int len = strlen(s);

        int j = 0;
        for (int i = 0; i < len; i++) {
            if (s[i] != ' ') {   
                s[j++] = s[i];
            }
        }
        s[j] = '\0'; 

        sort(s, s + strlen(s));

        cout << s << endl;
    }
    return 0;
}
