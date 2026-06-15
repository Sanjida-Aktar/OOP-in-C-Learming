#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    bool isfound = 1;
    while (ss >> word)
    {
        if (word == "Jessica")
        {
            isfound = true;
            break;
        }
        else
        {
            isfound = 0;
        }
    }
    if (isfound == 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}