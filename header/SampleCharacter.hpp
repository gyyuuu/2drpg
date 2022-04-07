#pragma once
#include "IDrawMapInfo.hpp"
#include <iostream>

class SampleCharacter : public IDrawMapInfo
{
private:
    static const int32_t START_POINT_X= 8;
    static const int32_t START_POINT_Y= 8;
    static const int32_t MAX_HP = 100;
    
    int32_t m_point_x;
    int32_t m_point_y;
    int32_t m_hp;

public:
    SampleCharacter();
    ~SampleCharacter();
    void ShowStatus();
    void DrawMap(int32_t map_x, int32_t map_y) override;
    void Move();
};
