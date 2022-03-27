#include <bits/stdc++.h>
using namespace std;

int main()
{
    char c;
    cin >> c;
    double m[12][12];
    for(int i = 0 ; i < 12; i++){
        for(int j = 0 ; j < 12; j++){
            cin >> m[i][j];
        }
    }
    double inc1 =0, inc2 =4 , sum =0;
    for(int i = 1 ; i <= 10; i++){
        if(i<=5){
            for(int j = 0 ; j <= inc1 ; j++){
                sum+=m[i][j];
            }
            inc1++;
        }
        else if(i>=6){
            for(int j = 0 ; j <= inc2 ; j++){
                sum+=m[i][j];
            }
            inc2--;
        }
    }
    if(c == 'S') cout << fixed << setprecision(1) << sum << endl;
    else if(c== 'M') if(c == 'S') cout << fixed << setprecision(1) << sum/30 << endl;
    return 0;
}
