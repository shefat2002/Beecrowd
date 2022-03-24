#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n ;
    cin >> n;
    int a[n];
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    for(int i =0, j =1 ; i < n ; i++ , j++){
        if(a[i] > a[j]){
            cout << j+1 << endl;
            return 0;
        }

    }
    cout << 0 << endl;

    return 0;
}
