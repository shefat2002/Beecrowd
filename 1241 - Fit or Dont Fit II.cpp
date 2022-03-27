#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n--){
        string s , t;
        cin >> s >> t;
        int lens = s.length() -1;
        int lent = t.length() -1;
        if(lent <= lens){
            bool match = true;
            for(int i = lens , j = lent ; j>=0; i-- , j --){
                if(s[i] != t[j]){
                    match = false;
                    break;
                }
                else match = true;
            }
            if(match == true) cout << "encaixa\n";
            else cout << "nao encaixa\n";
        }
        else cout << "nao encaixa\n";

    }
    return 0;
}


