# 2025東山高中資訊學科能力競賽隨便考
by 三忠 44 許友懌, 45許仲亨
## pA. 伊碩的悲哀
|解法|subtask 1|subtask 2|subtask 3|subtask 4|
|---|---|---|---|---|
|pow|✔️|❌|❌|❌|
|迴圈爆開再mod|✔️|❌|❌|❌|
|邊迴圈邊mod|✔️|✔️|❌|❌|
|邊迴圈邊mod邊找循環節|✔️|✔️|✔️|❌|
|快速冪|✔️|✔️|✔️|✔️|
>  基本上用```long long```就可以了，如果用```long double```要記得去小數點
>> 快速冪
>> ```cpp
>>int fastPower(int base, int exp, int mod) {
>>    int result = 1;
>>    while (exp > 0) {
>>        if (exp % 2 == 1) result = (result * base) % mod;
>>        base = (base * base) % mod;
>>        exp /= 2;
>>    }
>>    return result;
>>} 
>> ```
>> 複雜度 $\mathcal O(\log(n))$

## pB. 寶石遊戲
### Subtask 1
兩個人字串一樣<br>
-> 柯南猜過的 基德也一定猜過<br>
-> 一定會比到平手<br>
-> 柯南不可能贏
### Subtask 2
26種字母硬排```26!```種排序，用```next_permutation()```函式暴力模擬<br>
時間複雜度 $\mathcal O(n\cdot|c|!)$
### Subtask 3
因為猜一次會把全部同樣的字母都寫出來，所以相同字母出現的次數沒有關係<br>
贏的關鍵是「我的字串有你的字串沒有的字母」<br>
就有機會在他把我的猜完之前把他的猜完<br>
以下提供兩種解法
>布林陣列記錄並檢查
>```cpp
>#include <bits/stdc++.h>
>signed main()
>int n, m;
>string A, B;
>bool la[26], lb[26];
>{   
>    std::ios::sync_with_stdio(false); std::cin.tie(0);
>    cin >> n >> m >> A >> B;
>    for(char c : A){
>        la[c-'a'] = true;
>    }
>    for(char c : B){
>        lb[c-'a'] = true;
>    }
>    for(int i=0; i<26; i++){
>        if(la[i] && !lb[i]){
>            cout << "Yes";
>            return 0;
>        }
>    }
>    cout << "No";
>    
>    return 0;
>}
>```

>set特性排除重複
>```
>#include<bits/stdc++.h>
>using namespace std;
>int main(){
>    ios::sync_with_stdio(0); cin.tie(0);
>
>    int n, m;
>    string A, B;
>    cin >> n >> m >> A >> B;
>    set<char> s;
>    for(int i=0; i<n; i++){
>        s.insert(A[i]);
>    }
>    for(int i=0; i<m; i++){
>        s.erase(B[i]);
>    }
>    cout << (s.empty() ? "No" : "Yes");
>
>    return 0;
>}
>```

## pC. 
### Subtask 1
只由一種字元組成 -> 「距離」就是字串長度差
### Subtask 2
利用DP<br>
#### 狀態: 
讓 ```dp[i][j]```代表把 $A$ 從```[0]```到```[i]```的子字串改成 $B$ 從```[0]```到```[j]```的子字串的步驟數

## pE. 東山水果攤
> 解析參考 https://hackmd.io/@wiwiho/sprout2024-exam-A
### Subtask 1
美麗值不影響結果，貪心地從最便宜的水果開始選，直到不能買為止。
### Subtask 2
$\mathcal O(2^N)$ 枚舉所有可能性並 $\mathcal O(N)$ 檢查。
### Subtask 3
枚舉 $0$ 到 $N$ 所有可能的購買數量。會發現枚舉到 $i$ 時，只需要考慮所有美麗值大於 $i-1$ 的水果。把這些水果拿出來後就跟 subtask 2 一樣，可以貪心地去依照價值選了。若前 $i$ 便宜的水果價值總和小於 $W$ 則我們可以順利購買 $i$ 個水果。而答案為最大的 $i$ 使得我們有辦法順利購買。

總共有 $N+1$ 種購買數量，每次要花 $\mathcal O(N\log N)$ 時間檢查（瓶頸為照價格排序），總時間複雜度 $\mathcal O(N^2\log N)$。
### Subtask 4
隨購買數量上升，我們可以選擇的水果集合只會越來越小，且他們彼此有包含關係。因此購買數量之於是否能成功購買具有單調性，也就是當某個 $i$ 無法完成購買時，因為 $i+1$ 能夠考慮的水果必然是目前的子集，因此一定也不可能完成購買。

![drawing](https://hackmd.io/_uploads/SJEDbSqb0.png)

所以我們可以對購買數量二分搜，讓枚舉時間減少到 $\mathcal O(\log N)$ ，整體時間複雜度下降為 $\mathcal O(N\log^2 N)$。
