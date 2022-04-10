#pragma once
#include "DrawableInterface.hpp"
#include "MapTable.hpp"

class ConsoleDrawer : public DrawableInterface
{
public:
    ConsoleDrawer(){};
    ~ConsoleDrawer(){};

    void DrawMap(Position position, ImageId imageid) const override;
};
