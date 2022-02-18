#include <iostream>
using namespace std;

int main()
{
    int f[11] , n , x = 0;
    f[0] = 1;
    for(int i = 1; i <10; i++){
        f[i] = i*f[i-1];
    }
    cin >> n;

    for(int i = 1; i < 10 ; i++){
        if(f[i] > n){
            x = i-1;
            break;
        }
    }
    int count = 0;;
    for(int i = x; i >= 0 ; i--){
        count += n/f[i];
        n = n%f[i];
    }
    cout << count << endl;
    return 0;
}
