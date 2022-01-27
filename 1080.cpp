#include <iostream>
using namespace std;

int main()
{
    int n[100]  , temp =0, t = 0;


    for (int i = 1 ; i <= 100 ; i++){
        cin >> n[i-1];
    }
    for(int j = 1; j <= 100; j++){

        if(n[j-1] > temp){
            temp = n[j-1];
            t = j;
        }
    }
    cout <<endl << temp << endl << t << endl;

}
