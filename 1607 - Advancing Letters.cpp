#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n--){
        string a , b;
        cin >> a >> b;
        int l = a.length();
        int count = 0;
        for(int i = 0 ; i < l; i++){
            int x = a[i] , y= b[i];
            if(x < y) count += (y - x);
            if(x > y) count += (26 - (x - y));
        }
        cout << count << endl;

    }
    return 0;
}
