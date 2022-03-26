#include "square.h"

#include <iostream>

Square::Square(int size)
    : size(size) {}

void Square::info() const {
    std::cout << "This is square with size " << size << '\n';
}

void Square::draw() const {
    info();
}
