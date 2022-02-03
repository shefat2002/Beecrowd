#include <iostream>
using namespace std;

int main()
{
    int n , m;
    cin >> n;
    for (int i = 0; i < n ; i++){
        cin >> m;
        int a;
        for(int j =0; j < m ; j++){
            cin >> a;
            if(a == 1){
                cout << "Rolien\n";
            }
            else if(a == 2){
                cout << "Naej\n";
            }
            else if(a == 3){
                cout << "Elehcim\n";
            }
            else if(a == 4){
                cout << "Odranoel\n";
            }
        }
    }

    return 0;
}


