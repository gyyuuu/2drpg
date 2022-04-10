#include <iostream>
#include "SampleMap.hpp"

SampleMap::SampleMap(const DrawableInterface* drawer, const ImageId image)
    : m_drawer(drawer)
    , m_imageid(image) {
    for (int x = 0; x < MAP_XSIZE; x++) {
        for (int y = 0; y < MAP_YSIZE; y++) {
            if ((y == 0) || (y == MAP_YSIZE - 1) ||
                    (x == 0) || (x == MAP_XSIZE - 1)) {
                    maptable[x][y] = IMAGE_ID_ROCK;
                }
                else {
                    maptable[x][y] = IMAGE_ID_EMPTY;
            }
        SampleMap::m_maptable[MAP_GOAL_POSITION_X][MAP_GOAL_POSITION_Y] = IMAGE_ID_GOAL;
        }
    }
}

void SampleMap::DrawMap() {            
    m_drawer->DrawMap(m_position, m_imageid);
}

//void SampleMap::ShowCharacter() {
    //for (int32_t y = 0; y < MAP_YSIZE; y++) {
        //for (int32_t x = 0; x < MAP_XSIZE; x++) {
            //if (){
                //continue;
            //}
        //}
        //std::cout << std::endl;
    //}
//}
