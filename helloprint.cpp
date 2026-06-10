// CPPFLAGS = -w -std=c++17
#include <iostream>

constexpr void operator""print(const char* str, size_t) {
    std::cout << str << std::endl;
}

int main() {
    "Hello World!"print;
}
