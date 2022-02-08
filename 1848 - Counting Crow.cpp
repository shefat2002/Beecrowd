#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int len = 0 , n = 0;
    while(getline(cin , s)){

        if(s[0] == 'c'){
            cout << len << endl;
            n++;
            len = 0;
        }
        else{
            if(s == "--*"){
                len+= 1;
            }
            else if(s == "-*-")
                len+=2;
            else if(s == "-**")
                len+=3;
            else if(s == "*--")
                len+=4;
            else if(s == "*-*")
                len+=5;
            else if(s == "**-")
                len+=6;
            else if(s == "***")
                len+=7;
        }
        if(n == 3)
            break;
    }

    return 0;
}
