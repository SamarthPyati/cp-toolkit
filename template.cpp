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
#include <iomanip>
#include <cctype>

using namespace std;

using ll = long long;
using ul = unsigned long;
using ld = long double;

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define ff first
#define ss second
#define sum(v)      std::accumulate(all((v)), 0LL)
#define sum_n(v, n) std::accumulate(v.begin(), v.begin() + (size_t)(n), 0LL)
#define vl std::vector<ll>
#define vu std::vector<ul>
#define vi std::vector<int>
#define sz(x)   ((size_t)(x).size())

// Checkers
#define is_even(x) ((x) & 1) == 0
#define is_odd(x)  ((x) & 1) == 1
#define is_power_of_two(x) ((x) > 0 && ((x) & ((x) - 1)) == 0)

// Helpers
#define n_digit(n) (size_t)std::string(std::to_string(n)).length()

// Loops
#define REP(i, n)       for (size_t i = 0; i < (n); ++i)
#define FOR(t, i, n)    for (t      i = 0; i < (n); ++i)

// Outputs
#define OUT_YES     cout << "YES\n"
#define OUT_NO      cout << "NO\n"
#define OUT_NO_SOL  cout << "NO SOLUTION\n"
#define OUT(s)      cout << (s) << "\n"

// Constants
const ll MOD = 1e9 + 7;
const ll INF_LL = 4e18;
const int INF_INT = 1e9;
const ld PI = acos(-1.0);

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