#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin >> n && n != 0){
        string s , ss;
        int year , t , time;
        int mn = 99999999;
        for(int i = 0; i < n ; i++){
            cin >> s >> year >> t;
            time = year - t;
            if(time < mn){
                mn = year - t;
                ss = s;
            }
        }

        cout << ss << endl;

    }
    return 0;
}
