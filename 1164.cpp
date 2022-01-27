#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        int a , sum = 0;
        cin >> a;

        for(int j = 1; j < a ; j++){
            if(a%j == 0){
                sum +=j;
            }
        }
        if(sum == a){
            cout << a << " eh perfeito\n";
        }
        else{
            cout << a << " nao eh perfeito\n";
        }

    }

    return 0;
}
