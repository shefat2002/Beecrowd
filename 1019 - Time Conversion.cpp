#include <iostream>
using namespace std;
int main() {
 
    int sec , m , h , s;
    
    scanf("%d" , &sec);
    
    m = sec / 60.0;
    sec = sec - m*60;
    h = m /60.0;
    m = m- h*60;
    
    printf("%d:%d:%d\n" , h, m, sec);
    
    

    return 0;
}
