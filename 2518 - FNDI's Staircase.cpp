#include <bits/stdc++.h>
using namespace std;
int main()
{
    double h , c , l , o , area , n;
    while(cin>> n >> h >> c >> l){

        o = sqrt(h*h + c*c);
        area = n*l*o;
        cout << fixed << setprecision(4) << area/10000 << "\n";
    }
    return 0;
}
