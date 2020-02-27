#include <iostream>

using namespace std;

class Kitty {
public:
    int num;
    char *str;

    Kitty(char *, int);
};

Kitty::Kitty(char *ch, int i) {
    str = ch;
    num = i;
}

int main() {
    Kitty obj("Kitty on your lap", 1);
    cout << obj.str;
    cout << obj.num;
    return 0;
}
