#include <iostream>
#include "../header/SampleCharacter.hpp"

SampleCharacter::SampleCharacter() {
    m_character_point_x = START_POINT_X;
    m_character_point_y = START_POINT_Y;
    m_character_HP = MAX_HP;
}

void SampleCharacter::ShowStatus() {
    std::cout << "SampleCharacter: (" << m_character_point_x<< "," << m_character_point_y << ")" << m_character_HP << std::endl;
}

bool SampleCharacter::ShowPosition(int32_t x_point, int32_t y_point) {
   if ((x_point == m_character_point_x) && (y_point == m_character_point_y)) {
       std::cout << '@' << std::endl;
   }
}

//void SampleCharacter::Move() {
   //int32_t target_x_point = 0;
   //int32_t target_y_point = 0;
   //char keybord_input;
   //switch (std::cin >> keybord_input){
       //case 'h':
            //target_x_point = -1; 
            //m_character_point_x += target_x_point;
            //break;
        //case 'j':
            //target_y_point = -1; 
            //m_character_point_y += target_y_point;
            //break;
        //case 'k':
            //target_y_point= +1; 
            //m_character_point_y += target_y_point;
            //break;
        //case 'l':
            //target_x_point= +1; 
            //m_character_point_x += target_x_point;
            //break;
        //defult:
            //break;
   //}
   //if (m_c_samplemap->m_maptable[m_character_point_x][m_character_point_y] == SampleMap::ROCK) {
       //return;
   //}
//}
