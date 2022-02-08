#include <iostream>

using namespace std;

int main()
{
    string s;
    while(getline(cin , s)){
        int n = 0 ;
        int len = s.length();
        for(int i = 0 ; i < len ; i++){
            if(s[i] != ' '){
                n++;
                if(s[i] > 96 && n%2 == 1)
                    s[i] -= 32;
                else if(s[i] < 96 && n%2 == 0)
                    s[i]+=32;

            }
        }
        s[len] = '\0';
        cout << s << endl;

    }

    return 0;
}
