#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
    int z;
    while(1){
        cin >> z;
        if(x<z)
            break;
    }
    int count = 0 ;
    for(int i = x , j = 0; j < z ; i++){

        j+=i;
        count++;
    }
    cout << count << endl;

    return 0;
}
