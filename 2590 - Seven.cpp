#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    while(n--){
        unsigned long long  a , l;
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cin >> a;

        if(a%4 == 1) l = 7;
        else if(a%4 == 2) l = 9;
        else if(a%4 == 3) l = 3;
        else l =1;
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout << l << "\n";
    }

    return 0;
}
