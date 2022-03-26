#pragma once

class Shape {
public:
    virtual ~Shape() = default;

    virtual void info() const = 0;
    virtual void draw() const = 0;
};
