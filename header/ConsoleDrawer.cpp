#include "ConsoleDrawer.hpp"
#include "MapTable.hpp"
#include "Image.hpp"
#include <iostream>

void ConsoleDrawer::DrawMap(Position position, ImageId imageid) const {
    //コンソールによるマップ表示
    int32_t mapCells = maptable[map_x][map_y];
    if (mapCells == IMAGE_ID_ROCK) {
            std::cout << "■" << ' ';
    }
    if (mapCells == IMAGE_ID_EMPTY) {
            std::cout << '.' << ' ';
    }
    if (mapCells == IMAGE_ID_GOAL) { 
            std::cout << 'G' << ' ';
    }   

}
