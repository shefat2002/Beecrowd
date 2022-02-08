#include <iostream>
using namespace std;

int main()
{
    long long int x , m;
    while(cin >> x >> m){
        if(x == 0 && m ==0)
            break;
        else{
            cout << x*m << endl;
        }
    }

    return 0;
}
