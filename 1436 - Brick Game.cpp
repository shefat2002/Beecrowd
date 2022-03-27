#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        int x;
        cin >> x;
        int a[x];
        for(int j = 0; j< x ; j++){
            cin >> a[j];
        }
        int s= sizeof(a) / sizeof(a[0]);
        sort(a , a + s);
        int m = x/2;
        cout << a[m] << endl;
    }

    return 0;
}
