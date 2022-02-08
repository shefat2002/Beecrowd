#include <iostream>
using namespace std;

int main() {

    int a , b , c , m , M;

    scanf("%d %d%d"  , &a , &b , &c);

    m = (a + b + abs(a-b))/2;
    M = (m + c + abs(m-c))/2;

    printf("%d eh o maior\n" ,M);

    return 0;
}
