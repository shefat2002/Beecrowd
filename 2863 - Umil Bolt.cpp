#include <bits/stdc++.h>
using namespace std;

int main()
{

    while(1){
        int n;
        float c1 = 10.0;
        cin >> n;
        for(int i = 0 ; i < n ; i++){
            float a;
            cin >> a ;
            if(a < c1){
                c1 = a;
            }
        }
        cout << c1 << "\n";
    }


    return 0;
}

