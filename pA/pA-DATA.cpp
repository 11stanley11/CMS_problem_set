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
    

    int t = 10000; outfile << t << endl;
    long double abmin = pow(10, 3), abmax = pow(10, 300); 
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distrib(1, 10000);

    while(true) {
        int ra = distrib(gen);
        int rb = distrib(gen);
        int rk = distrib(gen);
        if(rk <= 6 && pow(ra, rb) >= pow(10, rk)) {
            outfile << ra << " " << rb << " " << rk << endl;
            t--;
        }
        if(t==0) break;
    }


    return 0;
}