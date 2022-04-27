#include "KeybordInputer.hpp"
#include "MapTable.hpp"
#include "Image.hpp"
#include "ImageId.hpp"
#include "Cell.hpp"
#include <iostream>
#include <vector>
#include <ncurses.h>

void KeybordInputer::Input(celllist celllist) const {
   std::int32_t x;
   std::int32_t y;
   x = m_celllist[celllistcount_x][celllistcount_y].m_y;
   y = m_celllist[celllistcount_x][celllistcount_y].m_x;

   std::int32_t key = getch();
   switch (key) {
        case KEY_UP:
            x--;
            break;
        case KEY_DOWN:
            x++;
            break;
        case KEY_LEFT:
            y++;
            break;
        case KEY_RIGHT:
            y--;
            break;
        defult:
            break;
   }
   if(x != (MAP_XSIZE-1) && x != MAP_XSIZE_MIN && 
      y != (MAP_YSIZE-1) && y != MAP_YSIZE_MIN) {
        m_celllist[celllistcount_x][celllistcount_y].m_x = x;
        m_celllist[celllistcount_x][celllistcount_y].m_y = y;
   }
}
