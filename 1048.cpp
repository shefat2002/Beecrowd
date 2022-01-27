#include <iostream>
using namespace std;

int main()
{

    double s , i[5] = {.15 , .12 , .1 , .07 , .04};

    cin >> s;

    if(s >= 0 && s <=400){
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 15 %\n" , s+s*i[0] ,s*i[0]);
    }
    else if(s >= 400.1 && s <=800){
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 12 %\n" , s+s*i[1] ,s*i[1]);
    }
    else if(s >= 800.01 && s <=1200){
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 10 %\n" , s+s*i[2] ,s*i[2]);
    }
    else if(s >= 1200.01 && s <=2000){
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 7 %\n" , s+s*i[3] ,s*i[3]);
    }
    else if(s > 2000){
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 4 %\n" , s+s*i[4] ,s*i[4]);
    }
    return 0;
}
