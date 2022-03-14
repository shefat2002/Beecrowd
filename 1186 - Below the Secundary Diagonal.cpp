#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a[12][12];
    char c;
    cin >> c;
    double sum = 0;
    for(int i = 0 ; i < 12; i++){
        for(int j = 0 ; j < 12; j++){
            cin >> a[i][j];
        }
    }
    int u = 12;
    for(int i = 0 ; i < 12; i++){
        for(int j = u ; j < 12; j++){
            sum += a[i][j];
        }
        u--;

    }
    if(c == 'S') printf("%.1f\n" , sum);
    else if(c == 'M') printf("%.1f\n" , sum/66);


    return 0;
}



