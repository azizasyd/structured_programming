#include <bits/stdc++.h>

void solve(){
    int n;
    std::cin >> n;

    std::vector<long long> a(n), b(n);
    for(int i = 0; i < n; ++i){
        std::cin >> a[i];
    }

    for(int i = 0; i < n; ++i){
        std::cin >> b[i];
    }

    long long sum = 0;
    for(int i = 0; i < n; ++i){
        sum += (a[i]) * b[i];
    }

    std::cout << sum << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
