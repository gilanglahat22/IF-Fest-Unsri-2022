/*
McQueen melaju dengan kecepatan n ( n:float ) per detik, namun akibat mesinnya yang mogok kecepatannya berkurang sebanyak 1.5 perdetik.

Sisa jarak pertandingan adalah m ( m:float ), maka tentukanlah waktu yang diperlukan agar bisa menempuh jarak tersebut

jika kecepatan McQueen ( n:float ) mencapai <= 10, maka kecepatannya tidak lagi berkurang

Input Format

Baris pertama merupakan n ( n:double ), yaitu kecepatan perdetik McQueen saat mesinnya mulai mogok
Baris Kedua merupakan m ( m:double), yaitu jarak yang perlu McQueen tempuh.
Constraints

( 0 < n < 10^10 )

( 0 < m < 10^20 )

n < m

Output Format

Satu Baris yang berisi jumlah detik yang diperlukan McQueen untuk menyelesaikan pertandingan ( n:integer) dibulatkan ke atas
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
    ll N,M; cin >> N >> M;
    while(N--){
        ll X,Y; cin >> X >> Y;
        mii temp;
        ll A[M];
        rep(i,0,M-1){
            cin >> A[i];
            temp[A[i]] = 1;
        }
        sort(A,A+M);
        if((temp.count(X) && temp.count(2*X))||(temp.count(Y) && temp.count(2*Y))){
            cout << "Mereka Puas" << "\n";
        }
        else{
            if(!temp.count(Y)){
                cout << "Andi Puas" << "\n";
            }
            else{
                if(temp.count(X)){
                    if(max(A[M-1],2*X) > max(2*Y,A[M-2])){cout << "Andi Puas" << "\n";}
                    else{
                        cout << "Dani Puas" <<"\n";
                    }
                }else{
                    if(A[M-1] > max(2*Y,A[M-2])){cout << "Andi Puas" << "\n";}
                    else{
                        cout << "Dani Puas" <<"\n";
                    }
                }
            }
        }
    }
}
 
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
 
    solve();
 
    return 0;
}