#include <bits/stdc++.h>
using namespace std;

int full(string s)
{

    int l = s.length();
    int count = 0  , c[30] = {0};
    for(int i = 0 ; i < l ;i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            if(c[(int)s[i] -97] ==0){
                c[(int)s[i] -97]++;
                count++;
            }
        }

    }
    return count;

}

int main()
{
    int n;
    cin >> n;
    while(n--){
        string s;
        cin.ignore();
        getline(cin , s);
        int c = full(s);
        if(c == 26) cout << "frase completa\n";
        else if(c > 13) cout << "frase quase completa\n";
        else cout << "frase mal elaborada\n";
    }
    return 0;
}

