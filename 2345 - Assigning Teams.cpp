#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[4];
    for(int i =0; i < 4 ; i++){
        cin >> a[i];
    }
    sort(a , a+4);
    int team_a = a[0] + a[3];
    int team_b = a[1] + a[2];
    cout << (abs(team_a - team_b)) << endl;


    return 0;
}
