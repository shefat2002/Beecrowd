#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    for(int i = 0; i < n ; i++){
        cin.ignore();
        string s;
        getline(cin , s);
        cout << "I am Toorg!\n";
    }
    return 0;
}
