#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a1 , b1 , c1 , a2 , b2 , c2;

    cin >> a1 >> b1 >> c1 >> a2>> b2 >> c2;
    int total = 0;
    if(a1< a2) total += (a2-a1);
    if(b1< b2) total += (b2-b1);
    if(c1< c2) total += (c2-c1);

    cout << total << endl;
    return 0;
}
