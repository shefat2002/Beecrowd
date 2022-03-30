#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n--){
        long long a;
        cin >> a;
        if(a == 0){
            cout << "Not Prime\n";
            continue;
        }
        if(a == 1){
            cout << "Not Prime\n";
            continue;
        }
        if(a == 2){
            cout << "Prime\n";
            continue;
        }
        int te = 0;
        for(int j = 2 ; j< sqrt(a) + 1 ;j++){
            if(a % j == 0) te++;
            if(te == 2 ) break;
        }
        if(te >=1) cout << "Not Prime\n";
        else cout << "Prime\n";

    }
    return 0;
}
