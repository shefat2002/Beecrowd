#include <iostream>
using namespace std;

int main() {

    int a ,b , n;
    while(scanf("%d%d" , &a , &b) == 2){
        if(a == b){

            break;
        }
        else if(a < b){
            printf("Crescente\n");
        }
        else{
            printf("Decrescente\n");
        }

    }

    return 0;
}
