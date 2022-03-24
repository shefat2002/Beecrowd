#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n ;
    cin >> n;
    int a[10000];
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    for(int i =0; i < n-1 ; i++ ){
        if(a[i+1] < a[i]){
            cout << i+2 << endl;
            return 0;
        }

    }
    cout << 0 << endl;

    return 0;
}
