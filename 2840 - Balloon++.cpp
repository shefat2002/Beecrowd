#include <bits/stdc++.h>
using namespace std;
int main()
{
    double l , r , pi = 3.1415;
    cin >> r >> l;

    double c = l /(4*(pi* r*r*r)/3);
    cout << floor(c) << endl;

    return 0;
}
