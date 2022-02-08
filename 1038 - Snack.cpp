#include <iostream>
using namespace std;

int main() {

    int n , a;
    float p = 0.0;

    scanf("%d%d" , &a , &n);

    if(a == 1){
        p = n*4.00;
    }
    else if(a == 2){
        p = n*4.50;
    }
    else if(a == 3){
        p = n*5.00;
    }
    else if(a == 4){
        p = n*2.00;
    }
    else if(a == 5){
        p = n*1.50;
    }
    printf("Total: R$ %.2f\n" , p);

    return 0;
}
