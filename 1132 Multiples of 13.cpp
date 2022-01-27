// Please Do not copy and submit these code without trying more than three times.

#include <iostream>
using namespace std;

int main()
{
    int x , y , temp;
    cin >> x >> y;
    if(x>y){
        temp = x;
        x = y;
        y  = temp;
    }
    int count = 0;
    for(int i = x; i <= y; i++){
        if(i % 13 != 0){
            count+=i;
        }
    }
    cout << count <<endl;

    return 0;
}
