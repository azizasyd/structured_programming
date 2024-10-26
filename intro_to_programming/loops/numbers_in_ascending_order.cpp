#include <bits/stdc++.h>

void solve(){
    int a, b;
    std::cin >> a >> b;

    int start = std::min(a, b);
    int end = std::max(a, b);

    for(int i = start; i <= end; ++i){
        std::cout << i << " ";
    }
    std::cout << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
