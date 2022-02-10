#include <iostream>
using namespace std;

int main()
{
    int n , t , z , cnt = 1;
    cin >> n;
    cin >> t;
    z = t;
    for(int i = 1 ;i < n ; i++){
        cin >> t;
        if(z > t){
            z = t;
            cnt = i +1;
        }
    }
    cout << cnt << endl;

    return 0;

}

