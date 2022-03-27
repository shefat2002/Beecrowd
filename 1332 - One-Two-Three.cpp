#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n--){
        string s;
        cin >> s;
        int len = s.length();
        if(len == 5) cout << 3 << endl;
        else if(len == 3){
            if(s[0] == 'o'&& s[1] == 'n' || s[1] == 'n' && s[2] == 'e' || s[2] == 'e' && s[0] == 'o')
                cout << 1 << endl;
            else if(s[0] == 't'&& s[1] == 'w' || s[1] == 'w' && s[2] == 'o' || s[2] == 'o' && s[0] == 't')
                cout << 2 << endl;
        }

    }
    return 0;
}

