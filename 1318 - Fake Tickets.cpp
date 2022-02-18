#include <iostream>
using namespace std;

int main()
{
    int m , n ,a ;

    while(cin >> m >> n){
        if(m == 0 && n ==0) break;
        int t[100000] , count = 0;
        for(int i = 1; i <= m ; i++){
            t[i] = 0;
        }
        for(int i = 0 ; i < n ; i++){
            cin >> a;
            t[a]++;
        }
        for(int i = 1 ; i <= m ; i++){
            if(t[i] >1){
                count++;
            }
        }
        cout <<  count << endl;
    }


    return 0;
}
