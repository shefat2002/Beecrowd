#include <bits/stdc++.h>
using namespace std;

void output(string s)
{
    int l = s.length();
        int cap=0 , sm=0 ,num=0 , space = 0 , pun = 0;
        if(l >=6 && l <=32){
            for(int i = 0 ; i < l ; i++){
                if(s[i] >= 'a' && s[i] <= 'z') sm = 1;
                else if(s[i] >= 'A' && s[i] <= 'Z') cap = 1;
                else if(s[i] >= '0' && s[i] <= '9') num =1;
                else if(s[i] == ' ') space = 1;
                else pun = 1;
            }
            if(sm+cap + num == 3 && space != 1 && pun != 1) cout << "Senha valida.\n";

            else cout << "Senha invalida.\n";
        }

        else cout << "Senha invalida.\n";
}


int main()
{
    string s;
    while(getline(cin ,s)){
        if(s.length() >0)
            output(s);
    }

    return 0;
}

