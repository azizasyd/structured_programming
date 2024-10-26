#include <bits/stdc++.h>

void solve(){
    long long a, b;
    std::cin >> a >> b;

    long long ab = std::pow(a, b);
    long long ba = std::pow(b, a);

    std::cout << ab - ba << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
