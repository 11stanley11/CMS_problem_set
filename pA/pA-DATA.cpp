#pragma GCC optimize ("O2")
#pragma GCC optimize ("O3")
#pragma GCC optimize ("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define rep(v, i, n, s) for(int v = i; s > 0 ? v < n : v > n; v += s)
#define pb push_back
#define int long long
#define endl '\n'
#define pii pair<int,int>
#define mpii(a, b) make_pair(a, b)
#define ff first
#define ss second
#define all(x) x.begin(),x.end()
#define boost ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define debug(x) cerr<<#x<<":"<<x<<endl;
#define debuq(x) cerr<<"debug:"<<#x<<endl;
#define input freopen("../input.in", "r", stdin)
#define output ofstream outfile("../output.out");

using namespace std;

signed main() {
    // input; // annotate before submitting
    output;
    boost;
    

    int t = 100; outfile << t << endl;
    long double abmin = pow(10, 0), abmax = pow(10, 100); 
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distrib_a(1, 1000);
    uniform_int_distribution<> distrib_b(1, 1000000);
    uniform_int_distribution<> distrib_k(1, 8);

    while(true) {
        int ra = distrib_a(gen);
        int rb = distrib_b(gen);
        int rk = distrib_k(gen); 
        if(abmin <= pow(ra, rb) && pow(ra, rb) <= abmax && pow(ra, rb) >= pow(10, rk)) {
            outfile << ra << " " << rb << " " << rk << endl;
            t--;
        }
        if(t==0) break;
    }


    return 0;
}