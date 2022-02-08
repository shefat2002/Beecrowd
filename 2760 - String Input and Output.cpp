#include <iostream>
#include <string>
using namespace std;

void output(string a)
{
    if(a.length() >10){
        for(int i = 0; i < 10 ;i++){
            cout << a[i];
        }
    }
    else
        cout << a;
}

int main()
{
    string a , b , c;

    getline(cin , a);
    getline(cin , b);
    getline(cin , c);
    cout << a << b << c << endl;
    cout << b << c << a << endl;
    cout << c << a << b << endl;
    output(a);
    output(b);
    output(c);
    cout << endl;
    return 0;
}
