#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        int a , b;
        cin >> a >> b;
        cout << (__gcd(a ,b)) << endl;
    }

    return 0;
}
