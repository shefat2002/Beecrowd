#include <bits/stdc++.h>
using namespace std;

int main()
{
    char c;
    cin >> c;
    double sum = 0;
    double a[12][12];
    for(int i = 0 ; i < 12; i++){
        for(int j = 0 ; j < 12 ; j++){
            cin >> a[i][j];
            if(j > i && (i+j) < 11) sum += a[i][j];
        }
    }


    if(c == 'S') printf("%.1lf\n" , sum);
    else if(c == 'M') printf("%.1lf\n" , sum/30);
    return 0;
}

///1187 - Top Area
