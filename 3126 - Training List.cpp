#include <iostream>
using namespace std;
int main()
{
    int n , a = 0 , o;
    cin >> n;
    for (int i = 0; i < n ; i++){
        cin >> o;
        if(o == 1){
            a++;
        }
    }
    cout <<a << endl;

    return 0;
}
