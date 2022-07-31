#include <bits/stdc++.h>
using namespace std;

void even_odd(int n)
{
    if(n%2) cout << "ODD ";
    else cout << "EVEN ";
    if(n>0) cout << "POSITIVE";
    else cout << "NEGATIVE";
}

int main()
{
    int n; cin >> n;
    while(n--){
        int a; cin >> a;
        if(a==0) cout << "NULL";
        else even_odd(a);
        cout << endl;
    }
}
