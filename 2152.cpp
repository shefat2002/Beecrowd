#include <iostream>
using namespace std;

int main()
{
    int n , h  , m ,o;
    string s , hs = "0", ms = "0" ;
    cin >> n;
    for(int i = 0; i <= n ; i++){
        cin >> h >> m >> o;
        if(o == 1)
            s = "A porta abriu!";
        if(o == 0)
            s = "A porta fechou!";
        if(h>= 0 && h <=9){
            hs =  + h;
        }
        if(m>= 0 && m <=9){
            ms = "0" + m;
        }
        cout << hs << ":" << ms << " - " << s;
    }

    return 0;
}
