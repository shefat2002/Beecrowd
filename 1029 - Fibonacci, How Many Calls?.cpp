#include <bits/stdc++.h>
using namespace std;
int calls = 0;
int fibo(int f)
{
    calls+=1;
    if(f <= 1) return f;
    return fibo(f-1) + fibo(f-2);
}

int main()
{
    int n;
    cin>> n;
    for(int i = 0 ; i< n;i++){
        int f;
        cin >> f;
        int fib = fibo(f);
        cout << "fib(" << f << ") = " << calls-1 << " calls = " << fib << "\n";
        calls = 0;
    }

    return 0;
}
