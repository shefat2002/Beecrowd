#include <iostream>
using namespace std;

int main()
{
    char o;
    double a  , x = 0;
    cin >> o;

    for(int i = 0; i < 144 ; i++){
        cin >> a;
        x+=a;
    }

    if(o =='S'){
        printf("%.1lf\n" , x);
    }
    else if(o = 'M'){
        printf("%.1lf\n" , x/144);
    }

    return 0;
}
