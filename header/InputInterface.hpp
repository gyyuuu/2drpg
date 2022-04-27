#pragma once
#include "Cell.hpp"
#include "Image.hpp"
#include <iostream>

class InputInterface
{
public:
    virtual ~InputInterface(){};
    virtual void Input(celllist celllist) const = 0;
};
