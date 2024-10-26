#include <bits/stdc++.h>

void solve(){
    int n;
    std::cin >> n;

    std::vector<int> a(n);
    int min_num = INT_MAX;
    int max_num = INT_MIN;

    for(int i = 0; i < n; ++i){
        std::cin >> a[i];

        if(a[i] % 7 == 0){
            if(a[i] < min_num){
                min_num = a[i];
            }
        }

        if(a[i] % 10 >= 5){
            if(a[i] > max_num){
                max_num = a[i];
            }
        }
    }
    std::cout << (min_num == INT_MAX ? -1 : min_num) << "\n";
    std::cout << (max_num == INT_MIN ? -1 : max_num) << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
