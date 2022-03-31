#include <bits/stdc++.h>
using namespace std;

void get(string s)
{
    int len = s.length();
    string p;
    for(int i = 0; i < len ; i++){
        if(s[i] >= 'a' && s[i] <='z') p+= s[i];
    }
    reverse(p.begin() , p.end());
    cout << p << endl;
}

int main()
{
    int n;
    cin >> n;
    for(int i = 0; i< n ;i++){
        string s;
        cin >> s;
        get(s);
    }


    return 0;
}
