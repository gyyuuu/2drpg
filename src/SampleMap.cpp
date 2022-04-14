#include <iostream>
#include "SampleMap.hpp"

SampleMap::SampleMap(const DrawableInterface* drawer, const ImageId image)
    : m_drawer(drawer)
    , m_imageid(image) {
    for (int x = 0; x < MAP_XSIZE; x++) {
        for (int y = 0; y < MAP_YSIZE; y++) {
            for (int i = 0; i < MAP_SIZE; i++) {
                if ((y == 0) || (y == MAP_YSIZE - 1) ||
                        (x == 0) || (x == MAP_XSIZE - 1)) {
                        m_position[i].m_x = x;
                        m_position[i].m_y = y;
                    }
                    else {
                        m_position[i].m_x = x;
                        m_position[i].m_y = y;
                }
            }
        }
    }
}

void SampleMap::Draw() {            
    m_drawer->Draw(m_position.data(), m_imageid);
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
