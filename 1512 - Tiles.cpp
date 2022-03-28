#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a , b , c;
    while(cin >> a >> b >> c && a != 0 && b != 0 && c!= 0){
        int gcd = __gcd(b , c);
        int lcm = (c*b)/gcd;
        int tiles = (a/b) + (a/c) - (a/lcm);
        cout << tiles << endl;
    }
    return 0;
}
