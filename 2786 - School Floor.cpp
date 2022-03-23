#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l ,c;
    cin >> c>> l;
    int a = 0 ,b = 0;
    a +=  (l*c ) + (l-1) * (c-1);
    b += (l-1)*2 + (c-1)*2;
    cout << a << endl <<b << endl;

    return 0;
}

