#include <bits/stdc++.h>
using namespace std;
int main()
{
    double n;
    while(cin >> n){
        if(n == 0) break;
        double b = floor(n/90);
        double g = ceil((7*n)/90);
        cout << "Brasil " << b << " x Alemanha "<< g<< "\n";
    }


    return 0;
}

