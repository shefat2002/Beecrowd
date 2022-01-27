#include <iostream>
using namespace std;




int main()
{
    int a , b , c , s , m , l;
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


    cout << s << endl << m << endl << l << endl << endl;
    cout << a << endl << b << endl << c << endl;
}
