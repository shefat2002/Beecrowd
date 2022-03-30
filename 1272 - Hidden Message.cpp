#include <bits/stdc++.h>
using namespace std;

void hidden_message( string s)
{
    int l = s.length();
    if(s[0] >='a' && s[0] <='z') cout << s[0];
    for(int i = 1; i< l ; i++){
        if(s[i] >='a' && s[i] <='z'){
            if(s[i-1]<'a' || s[i-1] >'z')
                cout << s[i];
        }
    }

}


int main()
{
    int n;
    cin >> n;
    cin.ignore();
    while(n--){
        string s;
        getline(cin , s);
        hidden_message(s);
        cout << endl;
    }
    return 0;
}


