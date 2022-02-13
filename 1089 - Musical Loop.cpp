#include <iostream>
using namespace std;

int main()
{
    int n ;
    while(1){
        cin >> n;
        int a[n] , c = 0;
        if(n == 0)
            break;
        for(int i = 0; i < n ; i++){
            cin >> a[i];
        }
        for(int i = 1 ; i < n-1 ; i++){
            if(a[i] > a[i-1] && a[i] > a[i+1] ||a[i] < a[i-1] && a[i] < a[i+1])
                c++;
        }
        if(a[0] > a[1] && a[0] > a[n-1] ||a[0] < a[1] && a[0] < a[n-1] )
            c++;
        if(a[n-1] > a[n-2] && a[n-1] > a[0] ||a[n-1] < a[n-2] && a[n-1] < a[0])
            c++;
        cout << c << endl;
    }

    return 0;
}
