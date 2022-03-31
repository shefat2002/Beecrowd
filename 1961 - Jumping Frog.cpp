#include <bits/stdc++.h>
using namespace std;

int main()
{
    int p , n , temp1 , temp2;
    cin >> p >>n;
    int a[n];
    for(int i = 0 ; i < n;i++){
        cin >> a[i];
    }
    int count = 0;
    for(int i = 0 ; i < n ;i++){
        temp1 = a[i];
        temp2 = a[i+1];
        int check = abs(temp1 - temp2);

        if(check <= p){
            count++;
        }
    }

    if(count == n-1) cout << "YOU WIN\n";
    else cout << "GAME OVER\n";

    return 0;
}
