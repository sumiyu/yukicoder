#include<iostream>
#include<vector>

int main(){
    int n;
    std::cin >> n;

    std::vector<int> k(n);
    std::vector<bool> b(n);

    for(int i = 0; i < n; ++i){
        std::cin >> k[i];
        b[i] = false;
    }


}
