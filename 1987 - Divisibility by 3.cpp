#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int l;
    while(cin >> l >> s){

        long long total = 0;
        for(int i = 0 ; i < l ; i++){
            total += s[i] -48;
        }
        if( total % 3 ==0){
            cout << total << " sim\n";
        }
        else{
            cout << total << " nao\n";
        }

    }
    return 0;
}
