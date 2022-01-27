// Please Do not copy and submit these code without trying more than three times.

#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main()
{
    double a , b , c , x1 , x2 , d;
    cin >> a >> b >> c;

    d = pow(b,2) - 4*a *c;
    if(a == 0 || d < 0){
        cout << "Impossivel calcular\n";

    }
    else{
        printf("R1 = %.5lf\nR2 = %.5lf\n" , (sqrt(d)-b)/(2*a) , (-sqrt(d)-b)/(2*a) );
    }


    return 0;
}
