#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a , b , tabs;
    cin >> a  >> b;
    string s[b];
    tabs = a;
    for(int i = 0 ; i <b ; i++){
        cin >> s[i];
        if(s[i] == "fechou") tabs+=1;
        else if(s[i] == "clicou") tabs -=1;
    }
    cout << tabs << endl;

    return 0;
}
