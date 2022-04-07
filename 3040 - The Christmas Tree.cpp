#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n--){
        int a , b , c;
        cin >> a>> b >> c;
        if(a >= 200 && a <= 300 && b >=50 && c >= 150){
            cout << "Sim\n";
        }
        else cout << "Nao\n";

    }

    return 0;
}
