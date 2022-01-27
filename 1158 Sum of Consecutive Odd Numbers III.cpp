// Please Do not copy and submit these code without trying more than three times.

#include <iostream>
using namespace std;

int main()
{
    int x ,s , n;
    cin >> n;
    for(int j = 0; j<n; j++){
        int count = 0;
        cin >> x >> s;
        if(x % 2 ==0){
            x+=1;
        }
        for(int i = 0; i < s ; i++){

            count+=x;
            x+=2;
        }
        cout << count << endl;
    }


    return 0;
}

