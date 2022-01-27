// Please Do not copy and submit these code without trying more than three times.

#include <iostream>
using namespace std;

int main()
{

    int n , next =0 , f1 = 0 , f2 = 1;
    cin >> n ;
    for(int i = 1 ; i<= n; i++){
        if(i == n){
            cout << f1 << endl;
            break;
        }
        cout << f1 << " ";
        next = f1 + f2;
        f1 = f2;
        f2 = next;

    }

    return 0;
}
