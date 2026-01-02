#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <queue>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <tuple>
#include <functional>
#include <cassert>
using namespace std;

#define ll long long
#define ul unsigned long
#define ld long double
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define ff first
#define ss second
#define even(x) (x) % 2 == 0
#define odd(x) (x) % 2 == 1
#define sum(v) std::accumulate(all((v)), 0.0)
#define vl std::vector<ll>
#define vi std::vector<int>

#define SWAP(x, y) (x) ^= (y); (y) ^= (x); (x) ^= (y);

// Find num of digits of n in base b
#define digits(n, b) std::floor((std::logf(n) / std::logf(b)) + 1)
// Find num of digits of n in base 10
#define digits_b10(n) digits_base(n, 10)

#define OUT_YES cout << "YES" << "\n"
#define OUT_NO cout << "NO" << "\n"
#define OUT_NO_SOL cout << "NO SOLUTION" << "\n"
#define OUT(s) cout << (s) << "\n"

constexpr const int MOD = 1e9 + 7;
constexpr const ll INF_LL = 1e18;
constexpr const int INF_INT = 1e9;
const ld PI = atanf(1.0f) * 4;

template<bool add_one = false, typename T_vector>
void output_vector(const T_vector &v, int start = 0, int end = -1) {
    if (end < 0) end = int(v.size());

    for (int i = start; i < end; i++)
        if constexpr (add_one)
            cout << v[i] + 1 << (i < end - 1 ? ' ' : '\n');
        else
            cout << v[i] << (i < end - 1 ? ' ' : '\n');
}


#define TEST_CASE_TEMPLATE
void solve() {
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

#if defined(TEST_CASE_TEMPLATE)
    ul T;
    if (!(cin >> T)) return 1;
    while (T--) {
        solve();
    }
#else
    solve();
#endif

    return 0;
}