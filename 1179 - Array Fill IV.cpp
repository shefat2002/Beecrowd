#include <iostream>
using namespace std;

int main()
{
    int a  ,e[5] , o[5] , m =0 , n = 0;
    for(int i = 0 ; i < 15 ; i++){
        cin >> a;
        if(a%2 == 0){
            e[m] = a;
            m++;
        }
        else{
            o[n] = a;
            n++;
        }
        if(m == 5 ){
            for(int j = 0; j <5 ; j++){
                printf("par[%d] = %d\n" , j , e[j]);
            }
            m = 0;
        }
        if(n == 5 ){
            for(int j = 0; j <5 ; j++){
                printf("impar[%d] = %d\n" , j , o[j]);
            }
            n = 0;
        }
        if(i == 14 ){
            for(int j = 0; j < n ; j++){
                printf("impar[%d] = %d\n" , j , o[j]);
            }
            for(int j = 0; j < m ; j++){
                printf("par[%d] = %d\n" , j , e[j]);
            }
        }

    }



    return 0;
}
