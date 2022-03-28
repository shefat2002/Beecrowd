#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n , m =0;
    while(cin >> n&&n){
        if(n == 0 ) break;
        int mxlen = 0;
        int len[n];
        string s[n];
        for(int i = 0 ; i < n; i++){
            cin >> s[i];
            len[i] = s[i].length();
            mxlen = max(mxlen , len[i]);
        }
        if(m!=0) cout << "\n";
        else m = 1;
        for(int i = 0 ; i < n ; i++){
            cout <<right << setw(mxlen) << s[i] << "\n";
        }
    }
    return 0;
}



