#include <iostream>
using namespace std;

int min(int x , int y){
    int temp;
    if(x<y)
        temp = x;
    else
        temp = y;
    return temp;
}

int main()
{
    int n , x , y,s , z;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    s = a[0];
    for(int i = 1; i<n; i++){
        x = a[i];
        s = min(s , x);
    }
    for(int i = 0 ; i < n ; i++){
        if(a[i] == s){
            z = i;
            break;
        }
    }
    cout <<"Menor valor: " << s << endl << "Posicao: " << z << endl;

    return 0;
}
