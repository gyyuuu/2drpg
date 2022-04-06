#pragma once
#include <iostream>
#include "Character.hpp"

class SampleCharacter : public Character
{
private:
    SampleMap *m_c_samplemap; 
    static const int32_t START_POINT_X= 8;
    static const int32_t START_POINT_Y= 8;
    static const int32_t MAX_HP = 100;
    
    int32_t m_character_point_x;
    int32_t m_character_point_y;
    int32_t m_character_HP;

public:
    SampleCharacter();
    ~SampleCharacter();
    void ShowStatus();
    bool ShowPosition(int32_t x_point, int32_t y_point);
    void Move();
};
