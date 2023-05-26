#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl cout << "\n"

int main() {
    int t;cin >> t;
    while(t--){
        int n;cin >> n;
        set<ll> st;
        ll a;
        for(int i = 0; i < n ;i++){
            cin >> a;
            st.insert(a);
        }
        cout << st.size();nl;
    }
}
