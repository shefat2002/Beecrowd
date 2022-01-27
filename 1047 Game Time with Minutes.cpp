// Please Do not copy and submit these code without trying more than three times.

#include <iostream>
using namespace std;

int main()
{
    int hi , hf , mi , mf  , m;
    cin >> hi >> mi >> hf >> mf;
    m = ((hf*60)+mf ) - ((hi*60)+mi);

    if(m<=0)
        m += 24*60;


    cout << "O JOGO DUROU " << m/60 << " HORA(S) E " << m%60 << " MINUTO(S)" <<endl;


    return 0;
}
