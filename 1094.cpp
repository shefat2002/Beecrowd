#include <iostream>
using namespace std;

int main()
{
    int n , a , c = 0 , r = 0 ,s = 0 , t = 0;
    double d;
    char w;
    cin >> n;
    for(int i= 0 ; i < n ; i++){
        cin >> a >> w;
        if(w == 'C'){
            c+=a;
        }
        else if(w == 'R'){
            r+=a;
        }
        else if(w == 'S'){
            s+=a;
        }
        t = t+a;
    }
    cout << "Total: " << t << " cobaias" << endl;
    cout << "Total de coelhos: " << c << endl;
    cout << "Total de ratos: " << r << endl;
    cout << "Total de sapos: " << s << endl;
    d = 100.0/t;
    printf("Percentual de coelhos: %.2lf %\n" , d*c);
    printf("Percentual de ratos: %.2lf %\n" , d*r);
    printf("Percentual de sapos: %.2lf %\n" , d*s);

    return 0;
}
