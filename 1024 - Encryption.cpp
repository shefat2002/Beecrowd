#include <bits/stdc++.h>
using namespace std;

void encrypt(string s)
{
    int len = s.length();
    for(int i = 0 ; i < len; i++){
        if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
            s[i]+=3;
    }
    reverse(s.begin() , s.end());

    int half = len/2;
    for(int i = half ; i < len ; i++){
        s[i] -= 1;
    }
    cout << s;
}

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    for(int i = 0 ; i< n ; i++){
        string s;
        getline(cin , s);
        encrypt(s);
        cout << endl;
    }

    return 0;
}

