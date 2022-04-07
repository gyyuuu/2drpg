#include <iostream>

class IDrawMapInfo
{
public:
    IDrawMapInfo(/* args */);
    ~IDrawMapInfo();
    virtual void DrawMap(int32_t map_x, int32_t map_y) = 0;
};
