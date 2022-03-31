#include <bits/stdc++.h>
using namespace std;

int total(int n)
{
    int count = 0;
    for(int i = 1 ; i <= n; i++){
        count += pow(i,2);
    }
    return count;
}

int main()
{
    int n;
    while(cin >> n && n != 0){

    cout << (total(n)) << endl;
    }

    return 0;
}
