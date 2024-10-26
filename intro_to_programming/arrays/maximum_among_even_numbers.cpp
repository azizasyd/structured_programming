#include <bits/stdc++.h>

void solve(){
    int n;
    std::cin >> n;

    int max_num = INT_MIN;
    std::vector<int> a(n);
    for(int i = 0; i < n; ++i){
        std::cin >> a[i];

        if(a[i] % 2 == 0){
            if(a[i] > max_num){
                max_num = a[i];
            }
        }
    }
    std::cout << max_num << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
