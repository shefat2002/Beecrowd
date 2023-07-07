#include <bits/stdc++.h>
using namespace std;

#define nl                  cout << "\n";
#define fast                ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

void solve()
{
    string s;
    char c;
    while(1){
        getline(cin ,s);
        if(s=="*")return;
        c = tolower(s[0]);
        bool mark =1;
        for(int i =1 ; i< s.size() ; i++){
            if(s[i] == ' '){
                if(c != tolower(s[i+1])){
                    mark=0;break;
                }
            }
        }
        if(mark)cout << "Y";
        else cout << "N";nl;
    }


}

int main()
{   
    fast;
    solve();
}
