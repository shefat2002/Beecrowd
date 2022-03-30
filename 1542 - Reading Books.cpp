#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q , p ,d;
    while(cin>> q  && q !=0){
        cin >> d >> p;
        int count = (q*p*d)/(p - q);
        if(count <=1)
            cout << count  << " pagina" << endl;
        else cout << count  << " paginas" << endl;
    }

    return 0;
}

