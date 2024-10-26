#include <bits/stdc++.h>

void solve(){
    long long a, b;
    std::cin >> a >> b;

    if(a <= b){
        for(long long i = a; i <= b; ++i){
            std::cout << i * i << " ";
        }
        std::cout << "\n";
    } else if(a > b){
        for(long long i = a; i >= b; --i){
            std::cout << i * i << " ";
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
