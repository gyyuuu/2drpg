#include <iostream>
#include "../header/SampleMap.hpp"

SampleMap::SampleMap() {
for (int x = 0; x < MAP_XSIZE; x++) {
    for (int y = 0; y < MAP_YSIZE; y++) {
        if ((y == 0) || (y == MAP_YSIZE - 1) ||
             (x == 0) || (x == MAP_XSIZE - 1)) {
                SampleMap::m_maptable[x][y] = ROCK;
            }
            else {
                SampleMap::m_maptable[x][y] = EMPTY;
            }
        }
    }
    SampleMap::m_maptable[MAP_GOAL_POSITION_X][MAP_GOAL_POSITION_Y] = GOAL;
}

SampleMap::~SampleMap(){    
}

void SampleMap::Show() {
    for (int32_t y = 0; y < MAP_YSIZE; y++) {
        for (int32_t x = 0; x < MAP_XSIZE; x++) {
            int32_t mapCells = SampleMap::m_maptable[x][y];
            if (mapCells == ROCK) {
                std::cout << "■" << ' ';
            }
            if (mapCells == EMPTY) {
                std::cout << '.' << ' ';
            }
            if (mapCells == GOAL) { 
                std::cout << 'G' << ' ';
            }
        }
        std::cout << std::endl;
    }
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
