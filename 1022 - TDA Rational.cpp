#include <bits/stdc++.h>
using namespace std;

#define ll                  long long
#define ld                  long double
#define ull                 unsigned long long
#define nl                  cout << "\n";
#define fast                ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

void solve()
{
    int a,b,c,d;
    char x,y,z;
    cin >> a >> x >>b >> y >> c >>z >> d;
    if(y=='+'){
        int nu = a*d + b*c;
        int de = b*d;
        cout << nu << '/' << de << " = ";
        int div = __gcd(abs(nu),abs(de));
        cout << nu/div << '/' << de /div;
    }
    else if(y=='-'){
        int nu = a*d - b*c;
        int de = b*d;
        cout << nu << '/' << de << " = ";
        int div = __gcd(abs(nu),abs(de));
        cout << nu/div << '/' << de /div;
    }
    else if(y=='*'){
        int nu = a*c;
        int de = b*d;
        cout << nu << '/' << de << " = ";
        int div = __gcd(abs(nu),abs(de));
        cout << nu/div << '/' << de /div;
    }
    else if(y=='/'){
        int nu = a*d;
        int de = b*c;
        cout << nu << '/' << de << " = ";
        int div = __gcd(abs(nu),abs(de));
        cout << nu/div << '/' << de /div;
    }
    nl;
}

int main()
{   
    fast;
    int n; 
    cin >> n; while(n--){solve();}
}
