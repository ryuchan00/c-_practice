//
// Created by yamakawa ryutaro on 2020/02/27.
//

#include <iostream>

using namespace std;

class Kitty {
public:
    ~Kitty();
};

Kitty::~Kitty() {
    cout << "Kitty";
}

void createKitty() {
    Kitty obj;
}

int main() {
    createKitty();
    createKitty();
    return 0;
}
