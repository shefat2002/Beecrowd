#include <iostream>
using namespace std;

int main()
{
    string s[10];
    for(int i = 0; i < 10 ; i++){
        cin >> s[i];
    }
    for(int i = 0 ; i <10 ; i++){
        int j = i+1;
        if(j == 3 || j == 7 || j == 9){
            cout << s[i] << endl;
        }
    }

    return 0;
}
