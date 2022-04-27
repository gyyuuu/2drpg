#pragma once
#include "DrawableInterface.hpp"
#include "InputInterface.hpp"
#include "Image.hpp"
#include "ImageId.hpp"
#include "MapTable.hpp"
#include "Cell.hpp"
#include <iostream>
#include <array>

class SampleCharacter 
{

public:
    SampleCharacter(const DrawableInterface* drawer, const InputInterface* inputer);
    ~SampleCharacter();
    void ShowStatus();
    void Draw();
    void Move();

private:
    static const std::int32_t START_POINT_X= MAP_XSIZE - 2;
    static const std::int32_t START_POINT_Y= MAP_YSIZE - 2;;
    static const std::int32_t MAX_HP = 100;
    static const std::int32_t celllistcount_x = 1;
    static const std::int32_t celllistcount_y = 1;

    const DrawableInterface* m_drawer;
    const InputInterface* m_inputer;
    std::int32_t m_hp;
    celllist m_celllist;

    
};
