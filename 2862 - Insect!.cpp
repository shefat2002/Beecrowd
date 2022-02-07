#include <iostream>
using namespace std;

int main()
{
    long long int n , a;
    cin >> n;
    for(int i = 0 ; i< n ; i++){
        cin >> a;
            if(a>8000)
                cout << "Mais de 8000!\n";
            else
                cout << "Inseto!\n";
        }


    return 0;
}
