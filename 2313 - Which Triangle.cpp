#include <iostream>
using namespace std;

int l(int a , int b){
    return ((a>b) ? a : b);
}
int s(int a , int b){
    return ((a<b) ? a : b);
}

int main()
{
    long long int x , y , z , a , b , c;
    cin >> a >> b >> c;
    x = l(a , l(b , c));
    z = s(a , l(b , c));
    y = a + b + c - x - z;
    if(x >= y + z)
        cout << "Invalido\n";
    else{
        if(x == y && y == z)
            cout << "Valido-Equilatero\n";
        else if(x != y && y != z && x != z)
            cout << "Valido-Escaleno\n";
        else
            cout << "Valido-Isoceles\n";
        if(x*x == (y*y + z*z))
            cout << "Retangulo: S\n";
        else
            cout << "Retangulo: N\n";
    }

    return 0;
}
