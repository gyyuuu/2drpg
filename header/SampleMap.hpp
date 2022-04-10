#pragma once
#include "DrawableInterface.hpp"
#include "Position.hpp"
#include "Image.hpp"
#include "MapTable.hpp"
#include <iostream>
class SampleMap 
{
public:
    SampleMap(const DrawableInterface* drawer, const ImageId image);
    ~SampleMap(){};
    void DrawMap();

private:
    const DrawableInterface* m_drawer;
    const ImageId m_imageid;
    Position m_position;
};
