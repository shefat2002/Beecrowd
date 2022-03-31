#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    double  tS =0 , tB =0 , tA =0 , ts =0 , tb =0 , ta =0;
    for(int i = 0 ; i < n ; i++){
        string name;
        cin >> name;
        int S , B , A , s , b , a ;
        cin >> S >> B >> A >> s >> b >> a;
        tS += S;
        tB += B;
        tA += A;
        ts += s;
        tb += b;
        ta += a;
    }
    double ps = (ts*100)/tS;
    double pb = (tb*100)/tB;
    double pa = (ta*100)/tA;

    cout << "Pontos de Saque: " << fixed << setprecision(2) << ps<<" %.\n";
    cout << "Pontos de Bloqueio: " << fixed << setprecision(2)  << pb<<" %.\n";
    cout << "Pontos de Ataque: " << fixed << setprecision(2)  << pa<<" %.\n";

    return 0;
}

