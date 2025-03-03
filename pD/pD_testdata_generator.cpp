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

#define input freopen("input.in", "r", stdin)
#define output ofstream outfile("output.out")

signed main(){
    ios_base::sync_with_stdio(0); cin.tie(0);

    output;

    int n = 9999, m = 9999;
    outfile << n <<' '<< m << endl;

    mt19937 gen(chrono::steady_clock::now().time_since_epoch().count());
    // 設定隨機變數
    /*
    uniform_int_distribution<> distrib_a(0, 1e9);           放範圍
    uniform_real_distribution<double> distrib_b(0.0, 1.0);  放範圍
    bernoulli_distribution distrib_c(0.5)                   放機率
    (https://en.cppreference.com/w/cpp/named_req/RandomNumberDistribution)
    */
    uniform_int_distribution<> distrib_a(7e8, 1e9);

    //
    
    // 跑隨機
    
    //

    // outfile
    for(int i=0; i<15; i++){
        cout << distrib_a(gen) << endl;
    }
    
    //

    return 0;
}