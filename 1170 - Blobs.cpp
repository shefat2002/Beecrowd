#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while(n--){
        float a;
        cin  >> a;
        int i = 0;
        while(a > 1.0){
            a /=2;
            ++i;
        }
        cout << i << " dias\n";
    }

    return 0;
}
