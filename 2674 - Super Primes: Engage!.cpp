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
    int c = 1;
    while(n>=10){
        int d = n%10;
        n /=10;
        if(n <=1) c = 0;
        for(int i = 2 ; i*i <=n ; i++){
            if(n%i == 0 ) c = 0;
            else c=1;
        }

    }
    if(n==2||n==3||n==7||n==5) c =1;
        else c = 0;
    return c;
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

