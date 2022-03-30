#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>> n && n !=0){
        int c , v  , count = 0;
        for(int i = 0 ; i < n ; i++){
            cin >> c >> v;
            count += v/2;
        }
        cout << count /2 << endl;
    }

    return 0;
}
