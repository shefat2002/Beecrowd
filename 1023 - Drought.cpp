#include <bits/stdc++.h>
using namespace std;

#define ll                  long long
#define ld                  long double
#define ull                 unsigned long long
#define nl                  cout << "\n";
#define fast                ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

void solve()
{
    int n;int tc=0;
    while(cin >> n && n){
        map<int,int>mp;
        int sa=0,sb=0;
        for(int i =0; i < n ;i++){
            int a,b;
            cin >> a >> b;
            sa+=a;sb+=b;
            mp[b/a] += a;
        }
        if(tc)nl;
        cout << "Cidade# " << ++tc << ":";nl;
        int x=0;
        for(auto i:mp){
            if(x) cout <<  ' ';
            cout << i.second << '-'<< i.first ;x++;
        }
        nl;
        cout << "Consumo medio: " << fixed << setprecision(2)<< floor(100*(double)sb/sa) / 100<< " m3.";nl;
    }
}

int main()
{   
    fast;
    solve();
}
