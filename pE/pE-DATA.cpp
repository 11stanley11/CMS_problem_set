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
    
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distrib_n(1, 2e5);
    uniform_int_distribution<> distrib_w(0, 1e9);
    uniform_int_distribution<> distrib_c(0, 1e9);
    uniform_int_distribution<> distrib_t(0, 1e9);

    int t = 8; 
    rep(i, 1, t+1, 1) {
        ofstream file("dataset/subtask-4/subtask-4-0" + to_string(i) + ".in");
        int n = distrib_n(gen);
        int w = distrib_w(gen);
        file << n << " " << w << endl;
        rep(i, 0, n, 1) {
            int c = distrib_c(gen);
            file << c << " ";
        }
        file << endl;
        rep(i, 0, n, 1) {
            int t = distrib_t(gen);
            // int t = n;
            file << t << " ";
        }
        file.close();
    } 

    return 0;
}