#include <bits/stdc++.h>

void solve(){
    double a, b, c;
    std::cin >> a >> b >> c;

    double res = (a + std::sqrt(b)) / c;
    std::cout << std::fixed << std::setprecision(10) << res << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
