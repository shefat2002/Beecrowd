#include <iostream>
using namespace std;

int main()
{

    unsigned int a;
    int alc = 0 , gas = 0, dis = 0;

    while((scanf("%u" , &a)) == 1 ){
        if(a == 4){
            break;
        }
        else if( a == 1) alc++;
        else if( a == 2) gas++;
        else if( a == 3) dis++;
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n" , alc);
    printf("Gasolina: %d\n" , gas);
    printf("Diesel: %d\n" , dis);


    return 0;
}
