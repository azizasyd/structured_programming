#include <bits/stdc++.h>

void solve(){
    long long a;
    std::cin >> a;

    long long b = sqrt(a);
    if (b * b > a) {
        --b;
    }
    std::cout << b << "\n";}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
