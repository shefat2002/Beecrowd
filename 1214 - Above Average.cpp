#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while(n--){
        double a , count = 0 , sum = 0 , c[1001];
        cin >> a;
        for(int i = 0 ; i < a ; i++){
            cin >> c[i];
            sum+=c[i];
        }
        int avg = sum / a;

        for(int i = 0 ; i< a ; i++){
            if(avg < c[i]) count++;
        }

        cout << fixed << setprecision(3) << (count/a) * 100 << "%" << endl;
    }

    return 0;
}
