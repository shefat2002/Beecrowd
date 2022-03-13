#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int c = 0;
    for(int i = 0 ; i < s.length() ; i++){
        if(s[i] == '1'){
            c++;
        }
    }
    if(c % 2 == 0) cout << s << 0 << endl;
    else cout << s << 1 << endl;


    return 0;
}
