#include <bits/stdc++.h>

void solve(){
    double a, b;
    std::cin >> a >> b;

    double res = a / b;
    if (a == 0 && b == 0) {
        std::cout << "undefined" << "\n";
    } else if (b == 0 && a > 0) {
        std::cout << "posinf" << "\n";
    } else if (b == 0 && a < 0) {
        std::cout << "neginf" << "\n";
    } else {
        std::cout << "real" << "\n";
        std::cout << std::fixed << std::setprecision(10) << res << "\n";
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
