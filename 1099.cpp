#include <iostream>
using namespace std;

int main()
{
    int n , a , b , temp , count = 0;
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        cin >> a >> b;
        if(a>b){
            temp = a;
            a = b;
            b  = temp;

        }
        count = 0;
        for(int j = a+1; j <b ; j++){
            if(j%2 != 0){
                count+=j;
            }
        }
        cout << count << endl;

    }


    return 0;
}
