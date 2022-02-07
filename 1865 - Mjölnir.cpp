#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    for(int i = 0 ; i < n ; i ++){
        int a;
        cin >> s >> a;
        if(s == "Thor")
            cout << "Y\n";
        else
            cout << "N\n";
    }

    return 0;
}
