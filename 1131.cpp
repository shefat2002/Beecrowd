#include <iostream>
using namespace std;

int main(){

    int a  ,b , x, total , i , g , d;
    total = i = g = d = 0;
    while(1){
        cin >> a >> b;
        cout <<"Novo grenal (1-sim 2-nao)\n";
        if(a > b)
            i++;
        else if(a==b)
            d++;
        else
            g++;
        total++;
        cin >> x;
        if(x== 1)
            continue;
        else if(x ==2){
            cout << total << " grenais\n" << "Inter:"<< i <<endl << "Gremio:" << g << endl << "Empates:" << d << endl;
            if(i>g)
                cout << "Inter venceu mais\n";
            else if(i<g)
                cout << "Gremio venceu mais\n";
            else
                cout << "Não houve vencedor\n";
            break;
        }

    }

    return 0;
}
