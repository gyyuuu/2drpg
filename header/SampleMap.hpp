#pragma once
#include "DrawableInterface.hpp"
#include "Position.hpp"
#include "Image.hpp"
#include "ImageId.hpp"
#include "MapTable.hpp"
#include <iostream>
#include <array>

class SampleMap 
{
public:
    SampleMap(const DrawableInterface* drawer, const ImageId image);
    ~SampleMap(){};
    void Draw();

private:
    const DrawableInterface* m_drawer;
    const ImageId m_imageid;
    std::array<Position, MAP_SIZE> m_position;
};
