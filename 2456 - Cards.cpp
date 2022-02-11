#include <iostream>
using namespace std;

int main()
{
    int i = 0 , n[5] , u=0 , l=0;

    for(int i = 0 ; i < 5 ; i++){
        cin >> n[i];
    }
    for(int i = 1 ; i < 5 ; i++){
        if(n[i] > n[i-1]){
            l+=1;
        }
        if(n[i] < n[i-1]){
            u+=1;
        }

    }
    if(l == 4 )
        cout << "C\n";
    else if(u == 4)
        cout << "D\n";
    else
        cout << "N\n";
    return 0;
}
