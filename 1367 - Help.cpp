#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin >> n){
        if(n == 0) break;

        char c ;
        string s;
        int t , corr =0 , time = 0, arr[90] = {0} , ascii  , check[90] = {0} , incur[90] = {0};
        for(int i = 0 ; i < n ; i ++){
            cin >> c >> t >> s;
            ascii = (int)c;
            ///cout << ascii << endl;
            if(s == "incorrect" && arr[ascii] == 0){
                check[ascii] = -1;
                incur[ascii]++;
            }

            else if(s == "correct" && arr[ascii] ==0){
                arr[ascii] = 1;
                time+=t;
                if(check[ascii] == -1) time+=20* incur[ascii];
            }

        }
        for(int i = 65 ; i <=90 ; i++){
            if(arr[i] == 1) corr++;
        }
        cout << corr << " " << time << endl;
    }

    return 0;
}
