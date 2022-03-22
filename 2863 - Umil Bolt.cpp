#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;

    while((cin >> n )){
        double c1 = 100.0;
        while(n--){
            double a;
            cin >> a ;
            if(a < c1){
                c1 = a;
            }
        }
        cout << fixed<< setprecision(2) <<  c1 << "\n";
    }


    return 0;
}

