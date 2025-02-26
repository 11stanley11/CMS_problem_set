#include <bits/stdc++.h>
#define endl '\n'
#define debug(x) cerr<<#x<<":"<<x<<endl;
#define all(x) (x).begin(),(x).end()
using namespace std;

// #pragma GCC optimize("O3")
// #pragma GCC optimize("Ofast")
// #define int long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define MP make_pair
#define PB push_back
#define F first
#define S second

string s1, s2;
int dp[5005][5005];
#define l1 s1.size()
#define l2 s2.size()

signed main(){
    ios_base::sync_with_stdio(0); cin.tie(0);

    cin >> s1 >> s2;

    for(int i=0; i<=l1; i++) dp[i][0] = i;
    for(int j=0; j<=l2; j++) dp[0][j] = j;

    for(int i=1; i<=l1; i++){
        for(int j=1; j<=l2; j++){
            if(s1[i-1] == s2[j-1]){
                dp[i][j] = dp[i-1][j-1];
            }
            else{
                dp[i][j] = min(min(dp[i-1][j], dp[i][j-1]), dp[i-1][j-1])+1;
            }
        }
    }

    cout << dp[l1][l2];

    return 0;
}