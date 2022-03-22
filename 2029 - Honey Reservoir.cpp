#include <bits/stdc++.h>
using namespace std;
int main()
{
    double v , d ;
    while(cin >> v >>d){
        double h , a , pi = 3.14 , r = d/2.0;
        h = v/(pi*r*r);
        a = pi*r*r;
        cout << "ALTURA = " << fixed << setprecision(2) << h<< endl;
        cout << "AREA = " << fixed << setprecision(2) << a<< endl;
    }

    return 0;
}
