#include <bits/stdc++.h>
using namespace std;

void bintoascii(int a)
{
    
    int num = a;
    int dec = 0;
    int base = 1;
    int temp = num;
    while(temp){
        int last = temp %10;
        temp /=10;
        dec += last*base;
        base *=2;
    }
    char s = dec;
    
    cout << s;
}

int main()
{
    int t;
    while(cin >> t){
            int a;
        for(int i = 0 ; i < t ;i++){
            cin >> a;
            bintoascii(a);
        }
        
        cout << endl;

    }

    return 0;
}
