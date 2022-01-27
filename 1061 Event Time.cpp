// Please Do not copy and submit these code without trying more than three times.

#include <iostream>
using namespace std;

int main()
{
    int d[3] , h[3] , m[3] , s[3];
    string st;
    cin >> st >> d[0];
    cin >> h[0] >> st >> m[0] >> st >> s[0];
    cin >> st >> d[1];
    cin >> h[1] >> st >> m[1] >> st >> s[1];

    d[2] = d[1] - d[0];
    h[2] = h[1] - h[0];
    m[2] = m[1] - m[0];
    s[2] = s[1] - s[0];

    if(s[2] < 0){
        s[2]+=60;
        m[2]--;
    }
    if(m[2] < 0){
        m[2]+=60;
        h[2]--;
    }
    if(h[2] < 0){
        h[2]+=24;
        d[2]--;
    }
    cout << d[2] <<" dia(s)\n" << h[2] <<" hora(s)\n" << m[2] <<" minuto(s)\n" << s[2] << " segundo(s)\n";

    return 0;
}
