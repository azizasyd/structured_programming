#include <bits/stdc++.h>

void solve(){
    long long a, b;
    std::cin >> a >> b;

    long long q = a / b;
    long long r = a % b; // -3 % 7 = 4

    if(r < 0){
        r += abs(b);
        q -= 1;
    }

    std::cout << q << "\n";
    std::cout << r << "\n";

}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
