#pragma once
#include "DrawableInterface.hpp"
#include "Cell.hpp"
#include "Image.hpp"
#include "ImageId.hpp"
#include "MapTable.hpp"
#include <iostream>
#include <vector>

class SampleMap 
{
public:
    SampleMap(const DrawableInterface* drawer);
    ~SampleMap(){};
    void Draw();

private:
    const DrawableInterface* m_drawer;
    using cellcolumn = std::vector<Cell>;
    using celllist = std::vector<cellcolumn>;
    celllist m_celllist;
};
