#include <bits/stdc++.h>
using namespace std;


int main()
{
	
    int n ,k;
    while(cin >> n >> k && n !=0 && k != 0){
    	int ticket[100000] = {0};
	    for(int i = 0; i < k ; ++i){
			int a; cin >> a;
			ticket[a]++;
	    }
	    int count = 0;
	    for(int i = 1 ;i <= n;++i)
	    {
	    	if(ticket[i] > 1) count++;
	    }
	    cout << count << endl;
		
    }

	return 0;
}
