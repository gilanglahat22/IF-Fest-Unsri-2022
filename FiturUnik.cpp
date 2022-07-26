/*
Eren, Armin, dan Mikasa adalah seorang Software Developer dari Perusahaan Survey Corps. Setiap perangkat lunak yang dibuat oleh Survey Corps diberi nomor seri yang setiap digitnya merupakan bilangan bulat antara 0 hingga 1000 (inklusif).

Eren, Armin, dan Mikasa memiliki kebiasaan unik pada perangkat lunak yang mereka buat untuk perusahaan mereka. Beberapa perangkat lunak yang dirilis untuk pengguna bisa jadi memiliki fitur tambahan yang unik. Pemberian fitur unik ini dijelaskan sebagai berikut. Eren, Armin, dan Mikasa memilih tiga bilangan berbeda, sebutlah 𝐴, 𝐵, dan 𝐶. Eren memberikan fitur tambahan unik pada produk yang nomor serinya habis dibagi 𝐴 saja (namun tidak habis dibagi oleh 𝐵 maupun 𝐶), Armin memberikan fitur tambahan unik pada produk yang nomor serinya habis dibagi 𝐵 saja (namun tidak habis dibagi oleh 𝐴 maupun 𝐶), dan Mikasa memberikan fitur tambahan unik pada produk yang nomor serinya habis dibagi oleh 𝐶 saja (namun tidak habis dibagi oleh 𝐴 maupun 𝐵).

Suatu ketika, Boss mereka bernama Erwin Smith ingin mengetahui ada berapa banyak maksimal produk dengan fitur tambahan unik untuk sekumpulan perangkat lunak yang nomor serinya di antara 𝑀𝑖𝑛 dan 𝑀𝑎𝑥 (inklusif, termasuk 𝑀𝑖𝑛 dan 𝑀𝑎𝑥 itu sendiri, dengan 𝑀𝑖𝑛 ≤ 𝑀𝑎𝑥) apabila dia juga mengetahui bilangan berbeda 𝐴, 𝐵, dan C

Input Format

Masukan terdiri dua baris, baris pertama adalah dua bilangan 𝑀𝑖𝑛 dan 𝑀𝑎𝑥 dengan 0 ≤ 𝑀𝑖𝑛 ≤ 𝑀𝑎𝑥 ≤ 1000 yang dipisahkan dengan spasi. Baris kedua adalah tiga bilangan berbeda 𝐴, 𝐵, dan 𝐶 dengan 2 ≤ 𝐴,𝐵, 𝐶 ≤ 1000 dengan 𝐴 ≠ 𝐵 ≠ 𝐶 yang dipisahkan dengan spasi.

Constraints

0 ≤ 𝑀𝑖𝑛 ≤ 𝑀𝑎𝑥 ≤ 1000

2 ≤ 𝐴,𝐵, 𝐶 ≤ 1000

Output Format

Keluaran adalah banyaknya produk dengan fitur tambahan unik berdasarkan nomor serinya yang berada di antara 𝑀𝑖𝑛 dan 𝑀𝑎𝑥 (inklusif, termasuk 𝑀𝑖𝑛 dan 𝑀𝑎𝑥), sebagaimana dijelaskan pada deskripsi soal.
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

/* Dengan cara heuristic KWKWKWKKW */

void solve(){
    ll min, max; cin >> min >> max;
    ll A,B,C; cin >> A >> B >> C;
    ll ans = 0;
    for(int i = min + A-(min%A); i <= max; i += A){
        if(i % B != 0 && i % C != 0){
            ans++;
        }
    }
    for(int i = min + B-(min%B); i <= max; i += B){
        if(i % A != 0 && i % C != 0){
            ans++;
        }
    }
    for(int i = min + C-(min%C); i <= max; i += C){
        if(i % A != 0 && i % B != 0){
            ans++;
        }
    }
    cout << ans << "\n";
}
 
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
 
    solve();
 
    return 0;
}