#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    while(getline(cin, s)){
        int len = s.length();
        string ss;
        for(int i = 0 , j = 0 , k = 0; i < len ; i++){
            if(s[i] == '_' && j ==0){
                ss+= "<i>";
                j = 1;
            }
            else if(s[i] == '_' && j == 1){
                ss+= "</i>";
                j= 0;
            }
            else if(s[i] == '*' && k == 0){
                ss+= "<b>";
                k =1;
            }
            else if(s[i] == '*' && k== 1){
                ss+= "</b>";
                k =0;
            }
            else
                ss += s[i];
        }
        cout << ss << "\n";
    }

    return 0;
}
