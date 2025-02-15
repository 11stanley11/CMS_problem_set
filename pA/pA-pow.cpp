/*
max 1.8 * 10e108 精度不佳
*/

#pragma GCC optimize ("O2")
#pragma GCC optimize ("O3")
#pragma GCC optimize ("Ofast")
#include <bits/stdc++.h>
#include <chrono>
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

using namespace std;
using namespace chrono;

signed main() {
    // input; // annotate before submitting
    boost;
    
    // auto start = high_resolution_clock::now();

    int t;
    double a, b, k;
    cin >> t;
    while(t--) {
        cin >> a >> b >> k;
        long long result = fmod(pow(a, b), pow(10.0, k));
        if (result == 0) {
            cout << string(k, '0') << endl; 
            continue;
        }
        rep(i, 0, k - floor(log10(result) + 1), 1) cout << 0;
        cout << result << endl;
    }

    // auto end = high_resolution_clock::now();
    // duration<double> elapsed = end - start;
    // cout << "time: " << elapsed.count() << "s" << endl;

    return 0;
}