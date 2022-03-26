#include "square.h"

#include <iostream>

namespace {

constexpr char corner = '+';
constexpr char horizontal = '-';
constexpr char vertical = '|';
constexpr char inner = ' ';

void top(int size) {
    std::cout << corner;
    for (int i = 2; i < size; ++i) {
        std::cout << horizontal;
    }
    std::cout << corner << '\n';
}

inline void bottom(int size) {
    top(size);
}

void middle(int size) {
    std::cout << vertical;
    for (int i = 2; i < size; ++i) {
        std::cout << inner;
    }
    std::cout << vertical << '\n';
}

void drawSquare(int size) {
    top(size);
    for (int i = 2; i < size; ++i) {
        middle(size);
    }
    bottom(size);
    std::cout << '\n';
}

}

Square::Square(int size)
    : size(size) {}

void Square::info() const {
    std::cout << "This is square with size " << size << '\n';
}

void Square::draw() const {
    drawSquare(size);
}
