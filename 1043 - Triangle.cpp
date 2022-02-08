#include <iostream>
using namespace std;
int main() {

    float a, b ,c , per , area;

    scanf("%f%f%f" , &a , &b , &c);

    if( a + b > c && b + c > a && a + c > b){
        per = a + b + c;
        printf("Perimetro = %.1f\n" , per);
    }
    else{
        area = ((a+b)/2)*c;
        printf("Area = %.1f\n" , area);
    }

    return 0;
}
