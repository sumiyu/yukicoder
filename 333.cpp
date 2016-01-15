#include<iostream>

int main(){
    long long r, m, ans = 0;
    std::cin >> r >> m;

    if(r < m){
        // 真ん中が一番高い場合
        ans += m - 2;
    }else{
        ans += 2000000000 - r;
        ans += r - m - 1;
    }

    std::cout << ans << std::endl;
    return 0;
}
