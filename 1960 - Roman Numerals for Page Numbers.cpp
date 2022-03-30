#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n , temp;
    string s;

    cin >> s;
    int len = s.length();
    if(len==3)
    {
        if(s[0]=='1') printf("C");
        else if(s[0]=='2') printf("CC");
        else if(s[0]=='3') printf("CCC");
        else if(s[0]=='4') printf("CD");
        else if(s[0]=='5') printf("D");
        else if(s[0]=='6') printf("DC");
        else if(s[0]=='7') printf("DCC");
        else if(s[0]=='8') printf("DCCC");
        else if(s[0]=='9') printf("CM");
        if(s[1]=='1') printf("X");
        else if(s[1]=='2') printf("XX");
        else if(s[1]=='3') printf("XXX");
        else if(s[1]=='4') printf("XL");
        else if(s[1]=='5') printf("L");
        else if(s[1]=='6') printf("LX");
        else if(s[1]=='7') printf("LXX");
        else if(s[1]=='8') printf("LXXX");
        else if(s[1]=='9') printf("XC");
        if(s[2]=='1') printf("I");
        else if(s[2]=='2') printf("II");
        else if(s[2]=='3') printf("III");
        else if(s[2]=='4') printf("IV");
        else if(s[2]=='5') printf("V");
        else if(s[2]=='6') printf("VI");
        else if(s[2]=='7') printf("VII");
        else if(s[2]=='8') printf("VIII");
        else if(s[2]=='9') printf("IX");
    }
    else if(len==2)
    {
        if(s[0]=='1') printf("X");
        else if(s[0]=='2') printf("XX");
        else if(s[0]=='3') printf("XXX");
        else if(s[0]=='4') printf("XL");
        else if(s[0]=='5') printf("L");
        else if(s[0]=='6') printf("LX");
        else if(s[0]=='7') printf("LXX");
        else if(s[0]=='8') printf("LXXX");
        else if(s[0]=='9') printf("XC");
        if(s[1]=='1') printf("I");
        else if(s[1]=='2') printf("II");
        else if(s[1]=='3') printf("III");
        else if(s[1]=='4') printf("IV");
        else if(s[1]=='5') printf("V");
        else if(s[1]=='6') printf("VI");
        else if(s[1]=='7') printf("VII");
        else if(s[1]=='8') printf("VIII");
        else if(s[1]=='9') printf("Is");
    }
    else if(len==1)
    {
        if(s[0]=='1') printf("I");
        else if(s[0]=='2') printf("II");
        else if(s[0]=='3') printf("III");
        else if(s[0]=='4') printf("IV");
        else if(s[0]=='5') printf("V");
        else if(s[0]=='6') printf("VI");
        else if(s[0]=='7') printf("VII");
        else if(s[0]=='8') printf("VIII");
        else if(s[0]=='9') printf("IX");
    }
    cout << endl;

    return 0;
}
