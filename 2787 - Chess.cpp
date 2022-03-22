#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a ,b;
    cin >> a >>b;

    if((a % 2 == 0 && b % 2 ==0 ) ||(a % 2 != 0 && b % 2 !=0) || a == b )
        cout << 1 <<"\n";
    else cout << 0 <<"\n";

    return 0;
}

