#include <iostream>
using namespace std;

int main()
{
    int a , n , s = 0;
    cin >> a >> n;
    while(n <= 0){
        int temp;
        cin >> temp;
        n = temp;
    }
    for(int i = 1 ; i <=n; i++){
        s += a;
        a++;
    }


    cout << s << endl;
    return 0;
}
