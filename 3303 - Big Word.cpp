#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    if(s.length() < 10)
        cout << "palavrinha\n";
    else if(s.length() >= 10 && s.length() < 20)
        cout << "palavrao\n";

    return 0;
}
