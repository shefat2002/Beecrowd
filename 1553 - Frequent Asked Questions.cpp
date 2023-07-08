#include <bits/stdc++.h>
using namespace std;

#define nl                  cout << "\n";
#define fast                ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

void solve()
{
    int n,k;
    while(cin >> n >> k && n && k){
        map<int,int>mp;
        for(int i =0; i < n; i++){
            int a;cin >> a;
            mp[a]++;
        }
        int cnt =0;
        for(auto i:mp){
            if(i.second >=k)cnt++;
        }
        cout << cnt;nl;
    }
}

int main()
{   
    fast;
    solve();
}
