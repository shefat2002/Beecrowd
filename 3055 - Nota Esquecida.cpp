#include <iostream>
using namespace std;

int main()
{
    int a , b , m;
    cin >> a >> m;

    if(a >= 0 && a <=100 && m >= 0 && m <=100){
        b = 2*m -a;
        cout << b << endl;

    }

    return 0;
}
