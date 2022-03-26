#include "diamond.h"

#include <iostream>
#include <iomanip>

namespace {

constexpr char straight = '/';
constexpr char reverse = '\\';

void topLine(int size, int row) {
    const int len = size * 2;
    const int between = row * 2;
    const int before = (len - between - 2) / 2;

    std::cout
        << std::setw(before) << ""
        << straight
        << std::setw(between) << ""
        << reverse
        << '\n';
}

void drawTop(int size) {
    for (int row = 0; row < size; ++row) {
        topLine(size, row);
    }
}

void bottomLine(int size, int row) {
    const int len = size * 2;
    const int before = row;
    const int between = len - 2 * before - 2;

    std::cout
        << std::setw(before) << ""
        << reverse
        << std::setw(between) << ""
        << straight
        << '\n';
}

void drawBottom(int size) {
    for (int row = 0; row < size; ++row) {
        bottomLine(size, row);
    }
}

}

Diamond::Diamond(int size)
    : size(size) {}

void Diamond::info() const {
    std::cout << "This is diamond with size " << size << '\n';
}

void Diamond::draw() const {
    drawTop(size);
    drawBottom(size);
}
