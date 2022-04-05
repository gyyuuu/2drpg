#pragma once
#include <iostream>
class Character
{

public:
    Character();
    virtual ~Character();
    virtual void ShowStatus() = 0;
    virtual bool ShowPosition(int32_t x_point, int32_t y_point) = 0;
    virtual void Move() = 0;
};
