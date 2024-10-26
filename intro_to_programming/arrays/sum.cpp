#include <bits/stdc++.h>

void solve(){
    int n;
    std::cin >> n;

    std::vector<int> a(n);
    long long sum = 0;
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
        if (a[i] % 2 != 0) {
            sum += a[i];
        }
    }
    std::cout << sum << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
