// CPPFLAGS = -std=c++20
#include <iostream>

class {} D;

void operator==(const int&, const auto&) {
  std::cout << "8==D💦\n";
}

int main() {
    8==D;
    8==D;
    8==D;
}
