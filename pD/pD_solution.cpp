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

int n, m, rt[200010], ans=0;
vector<pair<int, pii>> v;

int findRT(int city){
    return (rt[city] == city) ? city : (rt[city] = findRT(rt[city]));
}

void join(int i, int j){
    if(findRT(i) > findRT(j)) rt[i] = rt[j];
    else rt[j] = rt[i];
}

signed main(){
    ios_base::sync_with_stdio(0); cin.tie(0);

    cin >> n >> m;
    int a, b, c;
    for(int i=1; i<=n; i++){
        rt[i] = i;
    }

    for(int i=0; i<m; i++){
        cin >> a >> b >> c;
        v.PB({c, {a, b}});
    }
    sort(v.begin(), v.end());

    for(auto i : v){
        c = i.F; a = i.S.F; b = i.S.S;

        a = findRT(a);
        b = findRT(b);

        if(a == b) continue;
        join(a, b);
        ans += c;
    }

    // for(int i=1; i<=n; i++){
    //     cout << rt[i] << ' ';
    // }cout << endl;

    for(int i=2; i<=n; i++){
        findRT(i);
        if(rt[i] != 1){
            cout << "IMPOSSIBLE";
            return 0;
        }
    }

    cout << ans;
    return 0;
}