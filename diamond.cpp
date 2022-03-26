#include "diamond.h"

#include <iostream>

Diamond::Diamond(int size)
    : size(size) {}

void Diamond::info() const {
    std::cout << "This is diamond with size " << size << '\n';
}

void Diamond::draw() const {
    info();
}
