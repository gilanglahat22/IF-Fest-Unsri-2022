/* 
Alif adalah seorang yang gabut. Saat tidak ada kerjaan dia suka melipat kertas yang dia punya. Dia mempunyai kebiasaan melipat kertas pada sisi yang lebih panjang terlebih dahulu. Misalnya jika dia mempunyai kertas berukuran 120 x 80, maka dia akan melipat sisi dengan panjang 120 terlebih dahulu, sehingga ukuran kertasnya menjadi 60 x 80. Pada berikutnya dia kembali melipat kertas pada sisi dengan panjang 80, sehingga sekarang ukuran kertasnya menjadi 60 × 40.

Jika diberikan sebuah kertas gambar dengan ukuran 𝑃 × Q, tugas Anda adalah menentukan ukuran kertas setelah dilakukan pelipatan sebanyak M kali. Jika panjang sisi yang akan dilipat adalah bilangan ganjil, maka hasil pelipatan adalah berupa pembulatan ke bawah. Misalnya jika ukuran panjang yang akan dilipat adalah 11, maka setelah lipatan ukuran tersebut menjadi 5.

Input Format

Baris pertama masukan adalah bilangan bulat 𝑁 yang menyatakan banyaknya kertas yang dimiliki oleh Alif. Kemudian 𝑁 baris berikutnya masing-masing terdiri dari tiga buah bilangan positif 𝑃, 𝑄, dan M. dimana P dan Q adalah ukuran kertas dan M adalah jumlah banyak lipatan.

Constraints

1 <= P,Q,M <= 1000

P,Q,dan M adalah bilangan bulat positif

Output Format

Untuk setiap ukuran kertas yang diberikan, program Anda harus mengeluarkan ukuran kertas setelah dilakukan 𝑀 kali pelipatan dengan ketentuan ukuran yang lebih besar dicetak terlebih dahulu.
*/

// This code made by Muhammad Gilang Ramadhan

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
 
using namespace __gnu_pbds;
using namespace std;
 
#define ff                  first
#define ss                  second
#define pb                  push_back
#define eb                  emplace_back
#define mp                  make_pair
#define lb                  lower_bound
#define ub                  upper_bound
#define setbits(x)          __builtin_popcountll(x)
#define trailing_zeros(x)   __builtin_ctzll(x)
#define leading_zeros(x)    __builtin_clzll(x)
#define sz(v)               (int)v.size()
#define ps(y)               cout << fixed << setprecision(y)
#define ms(arr, v)          memset(arr, v, sizeof(arr))
#define all(v)              v.begin(), v.end()
#define rall(v)             v.rbegin(), v.rend()
#define trav(x, v)          for(auto &x: v)
#define w(t)                int t; cin >> t; while(t--)
#define rep(i, a, b)        for(int i = a; i <= b; i++)
#define rrep(i, a, b)       for(int i = a; i >= b; i--)
#define rep0(i, n)          rep(i, 0, n - 1)
#define rrep0(i, n)         rrep(i, n - 1, 0)
#define rep1(i, n)          rep(i, 1, n)
#define rrep1(i, n)         rrep(i, n, 1)
#define inp(arr, n)         rep0(i, n) cin >> arr[i];
 
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<ll, ll> pii;
typedef vector<ll> vi;
typedef vector<vi> vvi;
typedef vector<pii> vp;
typedef vector<bool> vb;
typedef vector<string> vs;
typedef map<ll, ll> mii;
typedef map<char, ll> mci;
typedef priority_queue<ll> pq_mx;
typedef priority_queue<ll, vi, greater<>> pq_mn;
typedef tree<ll, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update> pbds;
/*
 * find_by_order(i) -> returns an iterator to the element at ith position (0 based)
 * order_of_key(i)  -> returns the position of element i (0 based)
 */
 
const int N = 2e5 + 5;
const int mod = 1e9 + 7;
//const int mod = 998244353;
const ll inf = 2e18;
const ld eps = 1e-10, pi = acos(-1.0);
 
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
    int t; cin >> t;
    while(t--) {
        ll P,Q,M; cin >> P >> Q >> M;
        while(M--){
            if(max(P,Q) == P){P /= 2;}
            else{Q /= 2;}
        }
        cout << max(P,Q) << " " << min(P,Q) << "\n";
    }
}
 
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
 
    solve();
 
    return 0;
}