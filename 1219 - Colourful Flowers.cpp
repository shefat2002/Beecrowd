#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926535897

int main()
{
    double a[2];
    while(cin >> a[0] >> a[1]>> a[2]){
        sort(a, a+3);
        double p = (a[0]+a[1]+a[2])/2;
        double A = sqrt(p*(p-a[0])*(p-a[1])*(p-a[2]));
        double R = (a[0]*a[1]*a[2])/(4*A);
        double C = pi*R*R;
        double r = A/p;
        double c = pi*r*r;
        double v = A - c;
        double s = C - A;
        cout << fixed << setprecision(4) << s << " " << v << " " << c<< endl;
    }

    return 0;
}
