#include <iostream>
#include <vector>
#include <memory>

#include "shape.h"
#include "square.h"

using Shapes = std::vector<std::unique_ptr<Shape>>;

void draw(const Shapes& shapes) {
    for (const auto& shape : shapes) {
        shape->info();
        shape->draw();
    }
}

auto generateShapes() {
    Shapes result;

    result.emplace_back(std::make_unique<Square>(2));
    result.emplace_back(std::make_unique<Square>(5));

    return result;
}

int main() {
    auto shapes = generateShapes();

    draw(shapes);

    std::cout << "Hello" << '\n';
}
