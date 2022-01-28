//Do not copy the code. Try yourself

#include <iostream>
using namespace std;

int main()
{
    float a , b;
    double c , d;

    scanf("%f %f" , &a , &b);
    scanf("%lf %lf" , &c , &d);

    printf("A = %f, B = %f\nC = %lf, D = %lf\n" , a , b , c , d);
    printf("A = %.1f, B = %.1f\nC = %.1lf, D = %.1lf\n" , a , b , c , d);
    printf("A = %.2f, B = %.2f\nC = %.2lf, D = %.2lf\n" , a , b , c , d);
    printf("A = %.3f, B = %.3f\nC = %.3lf, D = %.3lf\n" , a , b , c , d);
    printf("A = %.3E, B = %.3E\nC = %.3E, D = %.3E\n" , a , b , c , d);
    printf("A = %.0f, B = %.0f\nC = %.0lf, D = %.0lf\n" , a , b , c , d);


    return 0;
}
