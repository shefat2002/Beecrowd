#include <iostream>
using namespace std;

int f(int a)
{
    if(a == 0) return 0;
    if(a == 1 || a ==2) return 1;
    return f(a-1) +f(a-2);
}

int main()
{
    int n , a;
    cin >> n;
    for(int i=0; i < n; i++){
        cin >> a;
        printf("Fib(%d) = %d\n" , a , f(a) );

    }

    return 0;
}
