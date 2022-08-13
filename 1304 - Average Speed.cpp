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
    int hour, min , sec, speed = 0, new_s, time, n, old_t;
    double dist = 0;
    char c;
    while(cin >> hour >> c >> min >> c >> sec){

        time = hour * 3600 + min*60 +sec;
        dist += (time - old_t)/3600.0 * speed;
        old_t = time;
        if(cin.peek() == ' '){
            cin >> speed;
        }
        else{
            cout << setfill('0');
            cout << setw(2) <<hour << ":";
            cout << setw(2) <<min << ":";
            cout << setw(2) <<sec << " ";
            cout << fixed << setprecision(2) <<  dist << " km";
            nl;
        }
    }
}


int main()
{
    file();
    //int n; cin >> n;
    //while(n--){
        //fast;
        //case;
        solve();
    //    nl;
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
