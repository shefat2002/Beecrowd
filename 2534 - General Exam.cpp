#include <bits/stdc++.h>
using namespace std;
#define ar 30050
int main()
{
    int n  ,p =0;
    while(cin >> n  >> p){
        int N[n] , P[ar], R[ar];
        for(int i = 0 ; i < n ; i++){
            cin >> N[i];
        }
        for(int i = 0; i< p ; i++){
            cin >> P[i];
        }
        int s = sizeof(N) / sizeof(N[0]);
        sort(N , N+ s);
        for(int i = s, j = 0; i >= 0 ; i-- , j++){
            R[j] = N[i];
        }
        for(int i = 0 ; i < p; i++){
            int t = P[i];
            cout << R[t] << "\n";
        }
    }
    return 0;
}

