#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a , b , c;
    while(cin >> a >> b >> c){
        if(a != b && a!= c){
            cout << "A\n";
        }
        else if(a != b && b!= c){
            cout << "B\n";
        }
        else if(c != b && a!= c){
            cout << "C\n";
        }
        else{
            cout << "*\n";
        }
    }

    return 0;
}
