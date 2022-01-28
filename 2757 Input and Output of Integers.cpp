//Make sure you have tried more than 100 times before watching this code!!

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
//"Warning!!! Do not copy this code!!!
    int a , b, c;
    cin >> a >> b >>c;

    cout << "A = " << a <<", B = " << b <<", C = "<<c << endl;

    if(a<0){
        if(a<=-1000)
            cout << "A =      " << a;
        else if(a<=-100)
            cout << "A =       " << a;
        else if(a<=-10)
            cout << "A =        " << a;
        else
            cout << "A =         " << a;
    }
    else{
        if(a >=1000)
            cout << "A =       "<< a ;
        else if(a >= 100)
            cout << "A =        "<< a ;
        else if(a>=10)
            cout << "A =         "<< a ;
        else
            cout << "A =          "<< a ;

    }

    if(b>=10)
        cout <<", B =         " << b;
    else
        cout <<", B =          " << b;
    if(c>=100)
        cout <<", C =        "<<c << endl;
    else if(c>=10)
        cout <<", C =         "<<c << endl;
    else
        cout <<", C =          "<<c << endl;

    if(a<0){
        int A = abs(a);
        if(a<=-1000)
            cout << "A = -00000" << A;
        else if(a<=-100)
            cout << "A = -000000" << A;
        else if(a<=-10)
            cout << "A = -0000000" << A;
        else
            cout << "A = -00000000" << A;
    }
    else{
        if(a>=1000)
            cout << "A = 000000" << a;
        else if(a>=100)
            cout << "A = 0000000" << a;
        else if(a>=10)
            cout << "A = 00000000" << a;
        else
            cout << "A = 000000000" << a;
    }
    if(b>= 10)
        cout << ", B = 00000000" << b;
    else
        cout << ", B = 000000000" << b;
    if(c>=100)
        cout <<", C = 0000000"<<c << endl;
    else if(c>=10)
        cout <<", C = 00000000"<<c << endl;
    else
        cout <<", C = 000000000"<<c << endl;


    if(a<0){

        if(a <= -1000)
            cout << "A = " << a <<"     , B = " ;
        else if(a <= -100)
            cout << "A = " << a <<"      , B = " ;
        else if(a <=-10)
            cout << "A = " << a <<"       , B = " ;
        else
            cout << "A = " << a <<"        , B = " ;
    }
    else{
        if(a >=1000)
            cout << "A = " << a <<"      , B = ";
        else if(a >= 100)
            cout << "A = " << a <<"       , B = ";
        else if(a>=10)
            cout << "A = " << a <<"        , B = ";
        else
            cout << "A = " << a <<"         , B = ";
    }
    if(b>=10)
        cout << b <<"        , C = "<<c;
    else
        cout << b <<"         , C = "<<c;
    if(c>=100)
        cout << "       " << endl;
    else if(c >=10)
        cout << "        " << endl;
    else
        cout << "         " << endl;


    return 0;
}

