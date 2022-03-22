#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n , m;
    cin >> n>> m;
    int a;
    int cnt = 0, tot = 0;
    for(int i = 0 ; i < n; i++){
        cnt = 0;
        for(int j = 0; j < m; j++){
            cin >> a;
            if(a > 0) cnt++;
        }
        if(cnt >= m) tot++;

    }
    cout << tot << endl;



    return 0;
}
