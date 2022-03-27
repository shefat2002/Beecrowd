#include <iostream>
using namespace std;

int main()
{
    int n  ,p =0;
    cin >> n;
    int a[n] , num[2001] = {0};
    int mx = 0;
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
        mx = max(mx , a[i]);
    }
    for(int i = 0; i< n ; i++){
        int temp = a[i];
        num[temp]++;
    }
    for(int i = 0 ; i <= mx ; i++){
        if(num[i] == 0) continue;
        cout << i << " aparece " << num[i] << " vez(es)" << endl;
    }

    return 0;
}
