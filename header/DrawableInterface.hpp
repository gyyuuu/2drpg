#pragma once
#include "Position.hpp"
#include "Image.hpp"
#include <iostream>

class DrawableInterface
{
public:
    DrawableInterface(){};
    virtual ~DrawableInterface(){};
    virtual void DrawMap(Position position, ImageId image) const = 0;
};
