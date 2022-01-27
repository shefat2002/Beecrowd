//Make sure you have tried more than three times before watching this code!!

#include <iostream>
using namespace std;

int main()
{

    int dd , mm , yy;
    scanf("%d/%d/%d" , &dd , &mm , &yy);

    if(mm <10)
        cout << "0";
    cout << mm << "/";
    if(dd < 10)
        cout << "0";
    cout << dd << "/";
    if(yy < 10)
        cout << "0";
    cout << yy << endl;

    if(yy <10)
        cout << "0";
    cout << yy << "/";
    if(mm < 10)
        cout << "0";
    cout << mm << "/";
    if(dd < 10)
        cout << "0";
    cout << dd << endl;

    if(dd <10)
        cout << "0";
    cout << dd << "-";
    if(mm < 10)
        cout << "0";
    cout << mm << "-";
    if(yy < 10)
        cout << "0";
    cout << yy << endl;

    return 0;
}
