// Please Do not copy and submit these code without trying more than three times.

#include <iostream>
using namespace std;

int main()
{
    int a , b , sum = 0;
    while(1){
        cin >> a >>b;
        if(a <= 0 || b <= 0){
            break;
        }
        if(a>b){
            int temp = a;
            a = b;
            b = temp;
        }
        sum =0;
        for(int i = a ; i <= b ; i++){
            cout << i << " ";
            sum = sum+i;
        }
        cout << "Sum=" << sum << endl;
    }

    return 0;
}
