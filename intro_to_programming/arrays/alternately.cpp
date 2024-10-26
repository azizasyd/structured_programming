#include <bits/stdc++.h>

void solve(){
    int n;
    std::cin >> n;

    std::vector<int> a(n), b(n), c(n);
    for(int i = 0; i < n; ++i){
        std::cin >> a[i];
    }

    for(int i = 0; i < n; ++i){
        std::cin >> b[i];
    }

    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            c[i] = a[i];
        } else {
            c[i] = b[i];
        }
    }

    for (int i = 0; i < n; ++i) {
        std::cout << c[i] << " ";
    }
    std::cout << "\n";

}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
