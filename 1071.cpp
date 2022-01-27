#include <iostream>
using namespace std;

int main()
{
    int x , y , c = 0;
    cin >> x >> y;
    for(int i = y+1 ; i < x ; i++){
        if(i % 2 != 0){
            c = c + i;
        }
    }
    cout << c << endl;

    return 0;
}
