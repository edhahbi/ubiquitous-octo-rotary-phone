 		
#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long int
#define ll long long
#define char unsigned char
#define INF 1e18

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define Time cerr << "\nTime Taken : " << (float)(clock() - time_p) / CLOCKS_PER_SEC << "\n";

clock_t time_p = clock();

void solve() {  
}


int32_t main() {
    fast_io;

    #ifdef ONPC
        auto start_time = chrono::steady_clock::now();
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        freopen("error.txt", "w", stderr);
    #endif

    int t = 1;
    //cin >> t;
    while(t--) {
        solve();
    }

    #ifdef ONPC
        cerr << "______________________" << endl;
        auto end_time = chrono::steady_clock::now();
        cerr << "Finished in "
             << chrono::duration_cast<chrono::milliseconds>(end_time - start_time).count()
             << " ms" << endl;
    #endif

    return 0;
}
