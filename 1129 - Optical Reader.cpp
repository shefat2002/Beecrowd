#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin >> n && n != 0){
        int a , count = 0 , mark =0;
        for(int i = 0 ; i< n ; i++){
            count = 0;
            for(int j  =1 ; j<= 5 ; j++){
                cin >> a;
                if(a <= 127){
                    mark = j;
                    //cout << mark << endl;
                    count++;
                }
            }
            if(count == 1){
                if(mark == 1) cout << "A\n";
                else if(mark == 2) cout << "B\n";
                else if(mark == 3) cout << "C\n";
                else if(mark == 4) cout << "D\n";
                else if(mark == 5) cout << "E\n";
            }
            else{
                cout << "*\n";
            }

        }
    }

    return 0;
}
