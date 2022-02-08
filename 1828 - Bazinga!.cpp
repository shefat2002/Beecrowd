#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = 1; i <=n ; i++){
        string a , b , c;
        cin >> a >>b;

        if((a == "tesoura" && b == "papel") || (a == "papel" && b == "pedra") || (a == "pedra" && b == "lagarto") || (a == "lagarto" && b == "Spock") || (a == "Spock" && b == "tesoura") || (a == "tesoura" && b == "lagarto") || (a == "lagarto" && b == "papel") || (a == "papel" && b == "Spock") || (a =="Spock" && b == "pedra") || (a == "pedra" && b == "tesoura")){
            c = "Bazinga!";
        }
        else if(a ==b){
            c = "De novo!";
        }
        else
            c = "Raj trapaceou!";

        cout << "Caso #" << i << ": "  << c << endl;
    }

    return 0;
}
