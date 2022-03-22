#include <bits/stdc++.h>
using namespace std;

int main()
{

    while(1){
        int n , c1 = 0 , c2= 0;
        cin >> n;
        if( n==0) break;
        while(n--){
            int a , b;
            cin >> a >> b;
            if(a > b) c1++;
            else if(a < b) c2++;
        }
        cout << c1 << " " << c2 << "\n";
    }


    return 0;
}
