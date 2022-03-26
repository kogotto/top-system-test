#pragma once

#include "shape.h"

class Square : public Shape {
public:
    Square(int size);

    virtual void info() const override;
    virtual void draw() const override;
private:
    int size{2};
};
