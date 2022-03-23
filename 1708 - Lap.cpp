#include <bits/stdc++.h>
using namespace std;

int main()
{
    double x  , y;
    cin >> x >> y;
    double  c = abs(x-y);
    cout << ceil(y / c) << endl;

    return 0;
}
