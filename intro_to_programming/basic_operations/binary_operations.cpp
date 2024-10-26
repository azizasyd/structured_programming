#include <bits/stdc++.h>

void solve(){
    long long a, b;
    std::cin >> a >> b;

    std::cout << a + b << "\n";
    std::cout << std::abs(a - b) << "\n";
    std::cout << a * b << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
