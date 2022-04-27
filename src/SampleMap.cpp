#include <iostream>
#include "SampleMap.hpp"

SampleMap::SampleMap(const DrawableInterface* drawer)
    : m_drawer(drawer){
      m_celllist = celllist(MAP_XSIZE, std::vector<Cell>(MAP_YSIZE));
    }


void SampleMap::Draw() {            
    m_drawer->Draw(m_celllist);
}

