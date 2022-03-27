#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin >> n){
        if(n == 0) break;
        double b = round(n/90);
        double g = round((7*n)/90);
        cout << "Brasil " << b << " x Alemanha "<< g<< "\n";
    }


    return 0;
}
