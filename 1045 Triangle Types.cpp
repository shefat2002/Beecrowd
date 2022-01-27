// Please Do not copy and submit these code without trying more than three times.

#include <iostream>
using namespace std;
int main()
{
    double a , b , c , l , m ,s;

    cin >> a >> b >> c;
    if(a < b ){
        if(a < c){
            s = a;
            if(b < c){
                m = b;
                l = c;
            }
            else{
                m = c;
                l = b;
            }
        }
        else{
            s = c;
            m = a;
            l = b;
        }
    }
    else{
        if(b < c){
            s = b;
            if(a < c){
                m = a;
                l = c;
            }
            else{
                m = c;
                l = a;
            }
        }
        else{
            s = c;
            m = b;
            l = a;
        }
    }
    a = l;
    b = m;
    c = s;



    if(a >= (b+c)){
        cout << "NAO FORMA TRIANGULO" << endl;
    }
    else{
        if(a*a == (b*b+c*c)){
            cout << "TRIANGULO RETANGULO" << endl;
        }
        if(a*a > (b*b+c*c)){
            cout << "TRIANGULO OBTUSANGULO" << endl;
        }
        if(a*a < (b*b+c*c)){
            cout << "TRIANGULO ACUTANGULO" << endl;
        }
        if(a == b && b ==c){
            cout << "TRIANGULO EQUILATERO" << endl;
        }
        if( (a == b && b != c) || a !=b && b ==c || a == c && b !=c ){
            cout << "TRIANGULO ISOSCELES" << endl;
        }
    }

    return 0;
}
