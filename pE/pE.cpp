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

const int MAXN = 2e5 + 5;
pii arr[MAXN];
int n, w;

bool solve(int cur) {
    int num = 0, sum = 0;
    rep(i, 0, n, 1) {
        if(arr[i].ss >= cur - 1) {
            num++;
            sum += arr[i].ff;
            if(num >= cur) break;
        }
    }
    if(sum <= w && num >= cur) return 1;
    else return 0;
}

int binary_search(int left, int right) {
    if(left == right - 1) return left;
    int mid = (left + right) / 2;
    if(solve(mid)) return binary_search(mid, right);
    else return binary_search(left, mid);
}

// signed main() {
//     // input; // annotate before submitting
//     boost;

//     cin >> n >> w;
//     rep(i, 0, n, 1) cin >> arr[i].ff;
//     rep(i, 0, n, 1) cin >> arr[i].ss; 
//     sort(arr, arr + n);

//     cout << binary_search(0, n + 1);

//     return 0;
// }

signed main() {
    // input; // annotate before submitting
    boost;

    cin >> n >> w;
    rep(i, 0, n, 1) cin >> arr[i].ff;
    rep(i, 0, n, 1) cin >> arr[i].ss; 
    sort(arr, arr + n);

    int ans = 0;
    rep(i, 0, n + 1, 1) {
        if(solve(i)) ans = i;
        else break;
    }

    cout << ans;
    return 0;
}

// signed main() {
//     boost;

//     int t = 8;
//     rep(i, 1, t+1, 1) {
//         string filename = "dataset/subtask-4/subtask-4-0" + to_string(i) + ".in";
//         FILE *fp = freopen(filename.c_str(), "r", stdin);
//         ofstream file("dataset/subtask-4/subtask-4-0" + to_string(i) + ".out");

//         cin >> n >> w;
//         rep(i, 0, n, 1) cin >> arr[i].ff;
//         rep(i, 0, n, 1) cin >> arr[i].ss; 
//         sort(arr, arr + n);

//         file << binary_search(0, n + 1);

//         fclose(fp);
//         freopen("CON", "r", stdin);
//         file.close();
//     }

//     return 0;
// }

