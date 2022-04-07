#pragma once
#include "IDrawMapInfo.hpp"
#include <iostream>
class SampleMap : public IDrawMapInfo
{
protected:
    static const int32_t MAP_XSIZE = 10;
    static const int32_t MAP_YSIZE = 10;
    static const int32_t MAP_GOAL_POSITION_X = 1;
    static const int32_t MAP_GOAL_POSITION_Y = 1;
    int32_t m_maptable[MAP_XSIZE][MAP_YSIZE];

public:
    enum MAP_OBJECTS {
        ROCK = 0,
        EMPTY = 1,
        GOAL = 2
    };
    SampleMap();
    ~SampleMap();
    void DrawMap(int32_t map_x, int32_t map_y) override;
//    void ShowCharacter();
};
