/*
good but can be better
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
    
    // ofstream cout("../compare2.txt");
    // auto start = high_resolution_clock::now();

    int t;
    cin >> t;
    while(t--) {
        int a, b, k;
        cin >> a >> b >> k;
        int mod_base = pow(10, k);
        unordered_map<int, int> seen;  // 記錄 `result` 及其對應的 `b`
        vector<int> cycle; // 記錄循環序列
        int result = 1;

        for (int exp = 0; exp < b; exp++) {
            result = (result * a) % mod_base;

            // 檢查是否已出現過相同的 `result`
            if (seen.count(result)) {
                int cycle_start = seen[result];
                int cycle_length = exp - cycle_start;  // 循環長度

                // 直接計算 b 對應的結果
                int index_in_cycle = (b - cycle_start -1) % cycle_length + cycle_start;
                result = cycle[index_in_cycle];
                break;
            }

            // 記錄結果
            seen[result] = exp;
            cycle.push_back(result);
        }

        // 格式化輸出
        string result_str = to_string(result);
        while (result_str.length() < k) result_str = "0" + result_str;
        cout << result_str << endl;
    }

    // auto end = high_resolution_clock::now();
    // duration<double> elapsed = end - start;
    // cout << "time: " << elapsed.count() << "s" << endl;

    return 0;
}
