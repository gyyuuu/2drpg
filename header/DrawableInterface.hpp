#pragma once
#include "Position.hpp"
#include "Image.hpp"
#include <iostream>

class DrawableInterface
{
public:
    virtual ~DrawableInterface(){};
    virtual void Draw(Position* position, ImageId image) const = 0;
};
