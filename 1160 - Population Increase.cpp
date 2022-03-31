#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n ; i++){
        int pa , pb ;
        double ga , gb;
        int year = 0;
        cin >> pa >> pb >> ga >> gb;
        while(pa<=pb){
            pa = pa+  ((pa*ga)/100);
            pb = pb+  ((pb*gb)/100);
            year++;
            if(year > 100){
                cout << "Mais de 1 seculo.\n";
                break;
            }
        }
        if(year <= 100) cout << year << " anos.\n";
    }

    return 0;
}
