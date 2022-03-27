#include <iostream>
using namespace std;

#define mxsize 100100

int fibo(int n)
{
    if(n <= 1) return n;
    return (fibo(n-1) + fibo(n-2));

}


int main()
{
    int fib[mxsize];
    for(int i = 2 ; i <= 30 ; i++){
        fib[i] = fibo(i);
    }
    int n ;
    cin >> n;
    int nt[mxsize];
    for(int  i = 1 , j =2 , k =1; i<= mxsize;i++){
        if(fib[j] != i){
            nt[k++] = i;
        }
        else j++;
    }
    cout << nt[n] << "\n";

    return 0;
}

