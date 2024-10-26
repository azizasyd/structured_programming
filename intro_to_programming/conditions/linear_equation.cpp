#include <bits/stdc++.h>

void solve() {
    double a, b;
    std::cin >> a >> b;

    if (a == 0 && b == 0) {
        std::cout << "infinite" << "\n";
    } else if (a == 0 && b != 0) {
        std::cout << "none" << "\n";
    } else {
        double x = -b / a;
        std::cout << "single" << "\n";
        std::cout << std::fixed << std::setprecision(10) << x << "\n";
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
