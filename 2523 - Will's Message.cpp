#include <iostream>
using namespace std;

int main()
{
    string s;

    int n , i;
    while(cin >> s){
        cin >> n;
        for(i = 0 ; i < n ; i++){
            int m ;
            cin >> m;
            cout << s[m-1];;
        }
        cout << endl;

    }

    return 0;
}
