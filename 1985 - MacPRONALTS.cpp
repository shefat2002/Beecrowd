#include <iostream>
using namespace std;

int main()
{
    float n , p ,q , total = 0;
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        cin >> p >> q;
        if(p == 1001){
            total+= 1.5*q;
        }
        else if(p == 1002){
            total+= 2.5*q;
        }
        else if(p == 1003){
            total+= 3.5*q;
        }
        else if(p == 1004){
            total+= 4.5*q;
        }
        else if(p == 1005){
            total+= 5.5*q;
        }
    }
    printf("%.2f\n" , total);

    return 0;
}

