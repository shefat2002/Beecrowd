#include <iostream>
using namespace std;

int main()
{
    int x;

    while(1){
        int count = 0 , sum = 0;
        cin >> x;
        if(x == 0){
            return 0;
        }
        if(x % 2 !=0){
            x+=1;
        }
        for(int i = 0; i < 5 ; i++){

            count+=x;
            x+=2;
        }
        cout << count << endl;
    }


    return 0;
}
