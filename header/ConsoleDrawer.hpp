#pragma once
#include "DrawableInterface.hpp"
#include "MapTable.hpp"

class ConsoleDrawer : public DrawableInterface
{
public:
    ConsoleDrawer(){};
    ~ConsoleDrawer(){};

    void Draw(celllist celllist) const override;
};
