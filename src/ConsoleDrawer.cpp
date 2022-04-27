#include "ConsoleDrawer.hpp"
#include "MapTable.hpp"
#include "Image.hpp"
#include "ImageId.hpp"
#include "Cell.hpp"
#include <iostream>
#include <vector>
#include <ncurses.h>

void ConsoleDrawer::Draw(celllist celllist) const {
    //コンソールによるマップ表示
    for (int x = 0; x < MAP_XSIZE; x++) {
        for(int y = 0; y < MAP_YSIZE; y++) {
            celllist[x][y].m_x = x;
            celllist[x][y].m_y = y;
            if ((celllist[x][y].m_x == 0) || (celllist[x][y].m_x == MAP_XSIZE - 1) ||
                (celllist[x][y].m_y == 0) || (celllist[x][y].m_y == MAP_XSIZE - 1)) {
                    mvprintw(celllist[x][y].m_x,celllist[x][y].m_y, "#");
                } else {
                    mvprintw(celllist[x][y].m_x,celllist[x][y].m_y, ".");
            }
            if (celllist[x][y].m_x == MAP_GOAL_POSITION_X && celllist[x][y].m_y == MAP_GOAL_POSITION_Y) {
                    mvprintw(celllist[x][y].m_x,celllist[x][y].m_y, "G");
            }
        }
    }
}
