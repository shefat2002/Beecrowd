#include <bits/stdc++.h>
using namespace std;

long long  fact(int i)
{
    if(i ==0) return 1;
    return i * fact(i-1);
}

int main()
{
    string s;
    while(cin >> s){
        if(s[0] == '0') break;
        int len = s.length();
        long long f = fact(len);
        cout << f << endl;;

    }

    return 0;
}
