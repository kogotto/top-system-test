#pragma once

#include "shape.h"

class Diamond : public Shape {
public:
    Diamond(int size);

    virtual void info() const override;
    virtual void draw() const override;
private:
    int size{2};
};
