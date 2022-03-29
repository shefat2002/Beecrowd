#include <bits/stdc++.h>
using namespace std;

void shift(string s , int n)
{
    char txt;

    for(int i = 0 ; i < s.length() ; i++){
        txt = s[i] - n;
        if(txt < 65){
            txt += 26;
        }
        cout << txt ;
    }


}

int main()
{
    int n;
    cin >> n;
    while(n--){
        string s;
        int sft;
        cin >> s >> sft;
        shift(s , sft);
        cout << endl;
    }

    return 0;
}
