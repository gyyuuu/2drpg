#include "ConsoleDrawer.hpp"
#include "MapTable.hpp"
#include "Image.hpp"
#include "ImageId.hpp"
#include <iostream>

void ConsoleDrawer::Draw(Position* position, ImageId imageid) const {
    //コンソールによるマップ表示
//    std::int32_t maptable[MAP_XSIZE][MAP_YSIZE];
    for (int i = 0; i < MAP_SIZE; i++) {
        if ((position[i].m_x == 0) || (position[i].m_x == MAP_XSIZE - 1) ||
            (position[i].m_x == 0) || (position[i].m_x == MAP_XSIZE - 1)) {
            std::cout << IMAGE_STRING_LOCK << ' ';
        } 
        else {
           std::cout << IMAGE_STRING_EMPTY << ' '; 
        } 
        if (position[i].m_x == MAP_GOAL_POSITION_X && position[i].m_y == MAP_GOAL_POSITION_Y) {
            std::cout << IMAGE_STRING_GOAL<< ' ';
        }
    }
}
