#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int l = s.length();
    for(int i = l -1 ; i >= 0; i--){
        cout << s[i];
    }
    cout << endl;

    return 0;
}
