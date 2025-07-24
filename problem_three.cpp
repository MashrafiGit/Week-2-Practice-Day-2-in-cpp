#include <bits/stdc++.h>
using namespace std;

int main()
{

    string letter;
    getline(cin, letter);

    string s;
    cin >> s;

    stringstream ss(letter);
    int cnt = 0;
    while (ss >> letter)
    {
        if (letter == s)
        {
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}