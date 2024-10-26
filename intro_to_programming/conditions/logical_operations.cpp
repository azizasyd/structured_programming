#include <bits/stdc++.h>

void solve() {
    int a, b, c;
    std::cin >> a >> b >> c;

    std::cout << ((a & b) == c ? "YES" : "NO") << "\n";
    std::cout << ((a | b) == c ? "YES" : "NO") << "\n";
    std::cout << ((a ^ b) == c ? "YES" : "NO") << "\n";
    std::cout << ((a == b) == c ? "YES" : "NO") << "\n";
    std::cout << ((!(a & b)) == c ? "YES" : "NO") << "\n";
    std::cout << ((!(a | b)) == c ? "YES" : "NO") << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
