// Please Do not copy and submit these code without trying more than three times.

#include <iostream>
using namespace std;

int main()
{
    float a , sum[2] ;
    int x , z=0;
    while(1){
        z=0;
        float  avg = 0;
        while(1){
            cin >> a;
            if(a >= 0.0 && a <= 10.0){
                sum[z] = a;
                z++;
            }
            else
                cout << "nota invalida\n";
            if(z == 2){
                avg = (sum[0] + sum[1])/2;
                printf("media = %.2f\n", avg);
                break;
            }
        }
        while(1){

            cin >> x;
            cout << "novo calculo (1-sim 2-nao)\n";
            if(x == 1 || x == 2){
                break;
            }
        }
        if(x==1)
            continue;

        else if (x==2)
            break;

    }


    return 0;
}
