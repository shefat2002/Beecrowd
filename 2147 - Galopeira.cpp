#include <iostream>
using namespace std;

int main()
{
    int n ;
    float l;
    cin >> n;
    for (int i = 0  ; i < n ; i++){
        string s;
        cin >> s;
        l = s.length();
        if(l <10)
            cout << "0.0" << l << endl;
        else if(l >= 10 && l < 100)
            cout <<"0." << l << endl;
        else
            printf("%.2f\n" , l/100);
    }

    return 0;
}
