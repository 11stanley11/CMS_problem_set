# 2025東山高中資訊學科能力競賽隨便考
by 三忠 44 許友懌, 45許仲亨
## pA. 伊碩的悲哀
|解法|subtask 1|subtask 2|subtask 3|subtask 4|
|---|---|---|---|---|
|pow|✔️|❌|❌|❌|
|迴圈爆開再mod|✔️|❌|❌|❌|
|邊迴圈邊mod|✔️|✔️|❌|❌|
|邊迴圈邊mod邊找尋環節|✔️|✔️|✔️|❌|
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
>> 複雜度 *`Olog(n)`*
