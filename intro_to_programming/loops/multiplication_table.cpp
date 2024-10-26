#include <bits/stdc++.h>

void solve(){
    int n;
    std::cin >> n;

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            std::cout << i * j;
            if (j < n){
                std::cout << " ";
            }
        }
        std::cout << "\n";
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
