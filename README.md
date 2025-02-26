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
