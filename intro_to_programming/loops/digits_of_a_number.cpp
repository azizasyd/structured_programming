#include <bits/stdc++.h>

void solve(){
    long long n;
    std::cin >> n;

    std::string str = std::to_string(n);

    long long count = str.size();
    long long sum = 0;

    for(char c : str){
        sum += c -'0';
    }
    std::cout << count << " " << sum << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
