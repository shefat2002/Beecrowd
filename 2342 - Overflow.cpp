#include <iostream>
using namespace std;

int main()
{
    long int n , p ,q , z;
    char c;
    cin >> n;
    scanf("%ld %c %ld" , &p , &c , &q);

    if(c == '+')
        z = p+q;
    if(c == '*')
        z = p*q;
    if(z <= n)
        cout << "OK" << endl;
    else
        cout << "OVERFLOW" << endl;

    return 0;
}
