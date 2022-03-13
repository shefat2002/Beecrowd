#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(cin >> s){
        int num[10] = {0};
        for(int i =0; i < s.length() ; i++){
            if(s[i] == '0') num[0]++;
            else if(s[i] == '1') num[1]++;
            else if(s[i] == '2') num[2]++;
            else if(s[i] == '3') num[3]++;
            else if(s[i] == '4') num[4]++;
            else if(s[i] == '5') num[5]++;
            else if(s[i] == '6') num[6]++;
            else if(s[i] == '7') num[7]++;
            else if(s[i] == '8') num[8]++;
            else if(s[i] == '9') num[9]++;

        }
        int mx = num[0];
        int digit = 0;
        for(int i = 1; i < 10 ; i++){
            if(num[i] >= mx){
                mx = num[i];
                digit = i;
            }
        }
        cout << digit << endl;
    }

    return 0;
}
