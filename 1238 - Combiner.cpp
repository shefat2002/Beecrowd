#include <bits/stdc++.h>
using namespace std;

#define ll                  long long
#define nl                  cout << "\n";
#define fast                ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

void solve()
{
    string s,t;
    cin >> s >> t;
    int len = min(s.size(),t.size());
    for(int i =0; i< len ; i++){
        cout << s[i] << t[i];
    }
    if(s.size()>t.size()) for(int i = len ; i < s.size() ;i++)cout << s[i];
    else for(int i = len ; i < t.size() ;i++)cout << t[i];
    nl;
}

int main()
{
    fast;
    int n; 
    cin >> n; while(n--){solve();}

}