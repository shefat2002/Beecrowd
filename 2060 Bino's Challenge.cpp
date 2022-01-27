// Please Do not copy and submit these code without trying more than three times.

#include <iostream>
using namespace std;

int main()
{
    int n , m2 , m3 , m4 , m5 , l;
    m2 = m3 = m4 = m5 =0;
    cin >> n;

    for(int i = 0; i < n ; i++){
        cin >> l;
        if(l%2 ==0)
            m2++;
        if(l%3 == 0)
            m3++;
        if(l%4 == 0)
            m4++;
        if(l%5 == 0)
            m5++;
    }
    cout << m2 << " Multiplo(s) de 2" << endl << m3 << " Multiplo(s) de 3" << endl<< m4 << " Multiplo(s) de 4" << endl<< m5 << " Multiplo(s) de 5" << endl;

    return 0;
}
