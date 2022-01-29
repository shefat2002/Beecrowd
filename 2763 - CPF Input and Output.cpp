//Make sure you've tried more than three times before watching the code.


#include <iostream>
using namespace std;
int main()
{
    int x , y , z , d;
    scanf("%d.%d.%d-%d" , &x , &y , &z , &d);
    if(x>=100)
        cout << x << endl;
    else if(x>=10 && x <100)
        cout << "0" << x << endl;
    else
        cout << "00" << x << endl;

    if(y>=100)
        cout << y << endl;
    else if(y>=10 && y <100)
        cout << "0" << y << endl;
    else
        cout << "00" << y << endl;
    if(z>=100)
        cout << z << endl;
    else if(z>=10 && z <100)
        cout << "0" << z << endl;
    else
        cout << "00" << z << endl;

    if(d>=10)
        cout << d << endl;
    else
        cout << "0"<< d << endl;
    return 0;
}


