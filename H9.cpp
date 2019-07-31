#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <queue>
#include <algorithm>
#include <map>

#define SWAP(a, b) \
    {              \
        a = a ^ b; \
        b = a ^ b; \
        a = a ^ b; \
    }
#define loop(i, start, end, step) for (i = start; i < end; i += step)

#define r_int(n) scanf("%d", &n);
#define r_long(n) scanf("%ld", &n);
#define r_db(n) scanf("%lf", &n);
#define r_lli(n) scanf("%lli", &n);
#define r_llu(n) scanf("%ull", &n);
#define r_line(str) getline(cin, str);

#define w_int(n) printf("%d ", n);
#define w_long(n) printf("%ld ", n);
#define w_db(n) printf("%lf ", n);
#define w_lli(n) printf("%lli ", n);
#define w_llu(n) printf("%u ", n);

using namespace std;
typedef long long int lli;
typedef unsigned long long int ull;

int getHash(int num)
{
    int temp = num, sum = 0;
    while (temp > 0)
    {
        sum += (temp % 10);
        temp /= 10;
    }
    return sum ^ num;
}

int main()
{
    int n, i, j, k, len;
    int maximum_index, maximum, collisions = 0;
    r_int(n);
    vector<int> num(n);
    vector<int> hashes;
    loop(i, 0, n, 1)
    {
        r_int(num[i]);
        hashes.push_back(getHash(num[i]));
    }
    sort(hashes.begin(), hashes.end());
    len = hashes.size();
    vector<int> hash_cnt(len, 0);
    hash_cnt[0] = 1;
    maximum = hash_cnt[0];
    maximum_index = 0;
    loop(i, 1, len, 1)
    {
        if (hashes[i] == hashes[i - 1])
        {
            hash_cnt[i] = hash_cnt[i - 1] + 1;
            collisions++;
        }

        else
            hash_cnt[i] = 1;
        if (maximum < hash_cnt[i])
        {
            maximum = hash_cnt[i];
            maximum_index = i;
        }

        //from github/chilloutwithanas
    }
    if (maximum > 1)
    {
        w_int(hashes[maximum_index]);
        w_int(collisions);
    }
    else
    {
        w_int(hashes[len - 1]);
        w_int(collisions);
    }
    return 0;
}