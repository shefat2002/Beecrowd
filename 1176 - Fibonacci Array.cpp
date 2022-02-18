#include <iostream>
using namespace std;


int main()
{
    int n , a;
    long long int f[61];
    f[0] = 0;
    f[1] = 1;
    cin >> n;
    for(int i=2; i < 61; i++){
        f[i] = f[i-1] + f[i-2];
    }
    for(int i = 0 ; i < n ; i++){
        cin >> a;
        printf("Fib(%d) = %lld\n" , a , f[a] );
    }

    return 0;
}
