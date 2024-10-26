#include <bits/stdc++.h>

void solve(){
    long long a, b, c, d;
    std::cin >> a >> b >> c >> d;

    long long f_sum = a * b;
    long long s_sum = c * d;

    if(f_sum > s_sum) std::cout << "First\n";
    else if(f_sum < s_sum) std::cout << "Second\n";
    else std::cout << "Any\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
