// Please Do not copy and submit these code without trying more than three times.

#include <iostream>
using namespace std;

int main()
{
    float m , p;
    cin >> m >> p;
    if(m >=1 && m <= 1000 && p >= 1 && p <= 1000){
        printf("%.2f" , m/p);
    }
    return 0;
}
