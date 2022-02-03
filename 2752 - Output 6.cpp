#include <iostream>
using namespace std;

int main()
{
    char s[50] = "AMO FAZER EXERCICIO NO URI";

    cout << "<" << s << ">" << endl;
    printf("<%30s>\n" , s);
    printf("<%.20s>\n" , s);
    printf("<%-20s>\n" , s);
    printf("<%-30s>\n" , s);
    printf("<%.30s>\n" , s);
    printf("<%30.20s>\n" , s);
    printf("<%-30.20s>\n" , s);

    return 0;
}
