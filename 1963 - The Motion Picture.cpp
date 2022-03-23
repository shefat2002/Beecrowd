#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a , b ;
    cin >> a >> b;

    double  i = b - a;
    double p = (i*100)/a;

    cout << fixed << setprecision(2) << p << "%" << endl;

    return 0;
}


