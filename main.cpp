#include <iostream>
#include <vector>
#include <memory>

#include "square.h"
#include "diamond.h"

using Shapes = std::vector<std::unique_ptr<Shape>>;

void draw(const Shapes& shapes) {
    for (const auto& shape : shapes) {
        shape->info();
        shape->draw();
    }
}

auto generateShapes() {
    Shapes result;

    result.emplace_back(std::make_unique<Square>(1));
    result.emplace_back(std::make_unique<Square>(2));
    result.emplace_back(std::make_unique<Square>(10));
    result.emplace_back(std::make_unique<Square>(11));

    result.emplace_back(std::make_unique<Diamond>(3));

    return result;
}

int main() {
    auto shapes = generateShapes();

    draw(shapes);

    std::cout << "Hello" << '\n';
}
