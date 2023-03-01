#include <bits/stdc++.h>
using namespace std;

int isprime(int n)
{
    if(n <=1) return 0;
    for(int i = 2 ; i*i <=n ; i++){
        if(n%i == 0 ) return 0;
    }
    return 1;
}
int issup(int n)
{
    while(n>=10){
        int d = n%10;
        n /=10;
        if(isprime(d) == 0) return 0;
    }
    if(n==2||n==3||n==7||n==5) return 1;
        else return 0;
}

int main()
{

    int a;
    while((cin >> a )){
        if(isprime(a) == 1){
            if(issup(a) ==1) cout <<"Super\n";
            else cout << "Primo\n";
        }
        else cout << "Nada\n";
    }


    return 0;
}

