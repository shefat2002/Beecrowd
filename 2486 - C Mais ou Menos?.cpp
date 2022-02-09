#include <iostream>
using namespace std;

int main()
{
    string s;
    while(1){
        int n , sum = 0;
        cin >> n;
        if(n == 0) break;
        for(int i = 0 ; i < n ; i++){
            int a , c ;
            cin >> a ;
            cin.ignore();
            getline(cin, s);
            if(s == "suco de laranja") c = 120;
            else if(s == "morango fresco") c = 85;
            else if(s == "mamao") c = 85;
            else if(s == "goiaba vermelha") c = 70;
            else if(s == "manga") c = 56;
            else if(s == "laranja") c = 50;
            else if(s == "brocolis") c = 34;
            sum+= (a*c);
        }
        if(sum < 110)
            cout << "Mais " << 110 - sum << " mg\n";
        else if(sum >= 110 && sum <=130)
            cout << sum << " mg\n";
        else if(sum > 130)
            cout << "Menos " << sum -130 << " mg\n";
    }
    return 0;
}
