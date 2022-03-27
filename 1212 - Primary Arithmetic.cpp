#include <bits/stdc++.h>
using namespace std;
int main()
{
    unsigned int a , b;
    while(cin >> a >> b){
        if(a == 0 && b ==0) break;
        int carry = 0;
        while(a >0 && b>0){
            int mod_a = a%10;
            int mod_b = b%10;
            if(mod_a + mod_b >=10) carry++;
            a /= 10;
            b /= 10;
        }
        if( carry == 0) cout << "No carry operation.\n";
        else if(carry >1) cout << carry << " carry operations.\n";
        else cout << "1 carry operation.\n";
    }

    return 0;
}
