#pragma once
#include "ImageId.hpp"
#include <iostream>
#include <vector>

struct Cell
{
   std::int32_t m_x; 
   std::int32_t m_y; 
   ImageId m_imageid;
};

using cellcolumn = std::vector<Cell>;
using celllist = std::vector<cellcolumn>;
