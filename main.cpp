#include <iostream>
#include "Battler.h"

int main() {
    Battler * JackFrost = new Battler( "Jack Frost", 30, 10, 5, 3, 2, 4, 5);
    std::cout << "Jack Frost HP: "  <<  JackFrost->get_Hp();
    return 0;
}
