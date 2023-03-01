#include <bits/stdc++.h>
using namespace std;
#define nl                  cout << "\n";

int main()
{   
    int h,z,l;
    cin >> h >> z >> l;
    int a[3] = {h,z,l};
    sort(a,a+3);
    if(l==a[1])cout<< "luisinho";
    else if(z==a[1])cout << "zezinho";
    else cout << "huguinho";
    nl;
}