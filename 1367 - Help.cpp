#include <iostream>
using namespace std;


int main()
{
    int n;
    while(cin >> n && n != 0){
        int a , ascii, time = 0 , total = 0, inc[100] = {0} , cor[100] = {0} , hold[100] = {0};
        char c;
        string s;
        for(int i = 0 ; i < n ; i++){
            cin >> c >> a >> s;
            ascii = (int)c;
            if(s == "incorrect"){
                inc[ascii]++;
            }
            else if(s == "correct"){
                hold[ascii] = 1;
                time += a;
                if(inc[ascii] > 0){
                    time += 20*inc[ascii];
                }
            }
        }
        for(int i = 65 ; i <=90;i++){
            if(hold[i] == 1) total++;
        }
        cout << total << " " << time << endl;
    }
    return 0;
}
