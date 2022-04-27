#pragma once
#include "Cell.hpp"
#include "Image.hpp"
#include <iostream>

class DrawableInterface
{
public:
    virtual ~DrawableInterface(){};
    virtual void Draw(celllist celllist) const = 0;
};
