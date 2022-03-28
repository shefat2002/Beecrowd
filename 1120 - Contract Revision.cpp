#include <bits/stdc++.h>
using namespace std;

int main()
{
    char d;
    string n;
    while(cin >> d >> n){
        if(n == "0" && d == '0') break;
        int len = n.length();
        string s;
        for(int i = 0 ; i < len; i++){
            if(n[i] == d) continue;
            s += n[i];
        }
        int zero = 0;
        bool iszero = false;
        for(int i = 0 ; i < s.length() ; i++){
            if(s[i] != '0'){
                iszero= false;
                break;
            }
            else{
                iszero = true;
                zero++;
            }
        }
        if(iszero == true || s.empty()) cout << 0 << endl;
        else if(zero > 0){
            string ss;
            bool nonzero = false;
            for(int i = 0 ; i < s.length(); i++){
                if(s[i] != '0') nonzero = true;
                if(s[i] == '0' && nonzero == false) continue;
                ss += s[i];
            }
            cout << ss << endl;
        }
        else cout << s << endl;
    }
    return 0;
}
