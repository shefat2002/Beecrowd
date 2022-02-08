#include <iostream>
using namespace std;
 
int main() {
 
    double a, b ,c ,m;
    
    scanf("%lf%lf%lf" , &a , &b ,&c);
    
    m = ((2*a)+(3*b)+(5*c))/(2+3+5);
    
    printf("MEDIA = %.1lf\n" , m);
 
    return 0;
}
