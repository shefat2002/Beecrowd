#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n--){
        string s;
        int count = 0 , left = 0;
        cin >> s;
        int len = s.length();
        for(int i = 0 ; i< len ; i++){
            if(s[i] == '<'){
                left++;
            }
            if(s[i] == '>' && left > 0){
                count++;
                left--;
            }
        }
        cout << count << endl;
    }

    return 0;
}
