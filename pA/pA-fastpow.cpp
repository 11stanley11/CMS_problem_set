/*
very good
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

int fastPower(int base, int exp, int mod) {
    int result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) result = (result * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}


signed main() {
    // input; // annotate before submitting
    boost;
    
    // ofstream outfile("../compare1.txt");
    // auto start = high_resolution_clock::now();

    int t;
    int a, b, k;
    cin >> t;
    while(t--) {
        cin >> a >> b >> k;
        int mod = pow(10, k);
        int result = fastPower(a, b, mod);
        if (result == 0) {
            cout << string(k, '0') << endl; 
            continue;
        }
        rep(i, 0, k - floor(log10(result) + 1), 1) cout << 0;
        cout << result << endl;
    }

    // auto end = high_resolution_clock::now();
    // duration<double> elapsed = end - start;
    // outfile << "time: " << elapsed.count() << "s" << endl;

    return 0;
}