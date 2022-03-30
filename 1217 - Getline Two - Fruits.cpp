#include <bits/stdc++.h>
using namespace std;
int main(){
    int n , fruit = 0;
    double cnt =0;
    cin >> n;
    for(int i=0 ;i < n ;i++){
        double v;
        string s;
        cin >> v;
        cin.ignore();
        getline(cin , s);
        int len = s.length();
        int temp = 1;
        for(int j = 0 ; j <len ; j++){
            if(s[j] == ' '){
                fruit++;
                temp++;
            }
        }
        cnt += v;
        cout << "day " << i+1  << ": " << temp << " kg\n";
    }
    cout <<fixed << setprecision(2) << (fruit+n)/(double)n << " kg by day\n";
    cout << fixed << setprecision(2) << "R$ " << cnt/n << " by day\n";


    return 0;
}
