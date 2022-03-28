#include <bits/stdc++.h>
using namespace std;

int main()
{
    int total;
    while(cin >> total && total !=0){
        int fink = 0;
        for(int i = 1 ; i+fink <= total ; i++){
            fink+=i;
        }
        cout << fink << " " << total-fink << endl;

    }

    return 0;
}
