#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    double calc = 0;
    cin >> n;
    while(n--){
        calc+=6;
        calc = 1/calc;
    }
    cout << fixed << setprecision(10) << 3+calc << endl;

    return 0;
}
