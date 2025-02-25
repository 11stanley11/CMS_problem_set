// TIOJ 2370
#include <bits/stdc++.h>
#define endl '\n'
#define pll pair<long long, long long>
#define pii pair<int, int>
#define F first
#define S second
#define PB push_back
//#define int long long
using namespace std;

int n, m;
string A, B;
bool la[26], lb[26];

signed main()
{   
    std::ios::sync_with_stdio(false); std::cin.tie(0);
    
    cin >> n >> m >> A >> B;
    
    for(char c : A){
        la[c-'a'] = true;
    }
    for(char c : B){
        lb[c-'a'] = true;
    }
    
    bool f = true;
    for(int i=0; i<26; i++){
        if(la[i] && !lb[i]){
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";
    
    return 0;
}




