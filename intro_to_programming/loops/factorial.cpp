#include <bits/stdc++.h>

void solve(){
    long long n;
    std::cin >> n;

    long long prod = 1;
    for(long long i = 1; i <= n; ++i){
        prod *= i;
    }
    std::cout << prod << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
