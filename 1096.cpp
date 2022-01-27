#include <iostream>
using namespace std;

int main()
{
    int a = 7 , b = 5;
    for(int i = 1 ; i <= 9 ; i+=2){

        for(int j  = a; j >=b ; j--){
            cout << "I=" << i << " J=" << j <<endl;

        }
        a+=2;
        b+=2;


    }
}
