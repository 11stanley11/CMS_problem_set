#include <bits/stdc++.h>
#define endl '\n'
#define debug(x) cerr<<#x<<":"<<x<<endl;
#define all(x) (x).begin(),(x).end()
using namespace std;

// #pragma GCC optimize("O3")
// #pragma GCC optimize("Ofast")
#define int long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define MP make_pair
#define PB push_back
#define F first
#define S second

#define input freopen("../input.in", "r", stdin)
#define output ofstream outfile("output.out")

signed main(){
    ios_base::sync_with_stdio(0); cin.tie(0);

    output;

    int n = 100000, m = 100000;
    cout << n <<' '<< m << endl;

    mt19937 gen(chrono::steady_clock::now().time_since_epoch().count());
    // 
    uniform_int_distribution<> distrib_char(0,25);
    string A, B;
    char c;
    //
    
    //
    for(int i=0; i<n; i++){
        A.PB(distrib_char(gen)+'a');
    }
    for(int i=0; i<m; i++){
        do{
            c = distrib_char(gen)+'a';
        }
        while(c == 'j' or c == 's');
        // c = distrib_char(gen)+'a';
        
        B.PB(c);
    }
    

    //
    cout << B << endl;
    //

    return 0;
}
