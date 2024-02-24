#include <iostream>

int main() {
    char c;
    int cnt = 0;
    while((c = std::cin.get()) != EOF) {
        if(c == '"') {
            if(cnt % 2 == 0) {
                std::cout << "``";
            } else {
                std::cout << "''";
            }
            cnt++;
        } else {
            std::cout.put(c);
        }
    }
    return 0;
}
