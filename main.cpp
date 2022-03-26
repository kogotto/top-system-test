#include <iostream>
#include <vector>
#include <memory>

#include "shape.h"

using Shapes = std::vector<std::unique_ptr<Shape>>;

void draw(const Shapes& shapes) {
    for (const auto& shape : shapes) {
        shape->info();
        shape->draw();
    }
}


int main() {
    std::cout << "Hello" << '\n';
}
