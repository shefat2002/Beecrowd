#include <bits/stdc++.h>
using namespace std;

#define ll      long long
#define nl      cout << "\n";
#define pi      (2*acos(0))
#define case    cout << "Case " << case_number << ": "; case_number++;
#define fast    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define MAX_INT 1000002
#define YES     "Yes"
#define NO      "No"

int case_number = 1;
//knights move
int dr[] = {2, 2, -2, -2, 1, 1, -1, -1};
int dc[] = {1, -1, 1, -1, 2, -2, 2, -2};


void file();
/*----------------------------------------------------------------------------------------------------------------------------------------*/


void solve()
{
    int n;
    cin >> n;
    vector<int> even,odd;
    for(int i  = 0 ; i< n ; i++){
        int a;
        cin >> a;
        if(a%2==0) even.push_back(a);
        else odd.push_back(a);
    }
    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end(), greater<int>());
    for(auto it: even) cout << it << endl;
    for(auto it: odd) cout << it << endl;
    

}


int main()
{
    file();
    int n; 
    //cin >> n; while(n--){
    //    case;nl;
        solve();
    //}

    return 0;
}

void file()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r", stdin);
    freopen("out.txt" , "w", stdout);
    #endif
}
